using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEditor.TestTools.TestRunner.Api;
using UnityEditor.TestTools.TestRunner.TestRun.Tasks;
using UnityEditor.TestTools.TestRunner.TestRun.Tasks.Events;
using UnityEditor.TestTools.TestRunner.TestRun.Tasks.Scene;
using UnityEngine;
using UnityEngine.TestTools;

namespace UnityEditor.TestTools.TestRunner.TestRun
{
    internal class TestJobRunner
    {
        private static IEnumerable<TestTaskBase> GetTaskList(ExecutionSettings settings)
        {
            if (settings == null)
            {
                yield break;
            }

            if (settings.EditModeIncluded() ||
                (PlayerSettings.runPlayModeTestAsEditModeTest && settings.PlayModeInEditorIncluded()))
            {
                yield return new JobStageTask("Setup");
                yield return new SaveModifiedSceneTask();
                yield return new RegisterFilesForCleanupVerificationTask();
                yield return new SaveUndoIndexTask();
                yield return new BuildTestTreeTask(TestPlatform.EditMode);
                yield return new PrebuildSetupTask();
                yield return new RemoveAdditionalUntitledSceneTask();
                yield return new ReloadModifiedScenesTask();
                yield return new SaveSceneSetupTask();
                yield return new CreateNewSceneTask();
                yield return new CreateEventsTask();
                yield return new RegisterCallbackDelegatorEventsTask();
                yield return new RegisterTestRunCallbackEventsTask();
                yield return new EnableTestOutLoggerTask();
                yield return new InitializeTestProgressTask();
                yield return new UpdateTestProgressTask();
                
                yield return new JobStageTask("Running tests");
                yield return new LegacyEditModeRunTask();

                yield return new JobStageTask("Cleanup");
                yield return new RestoreSceneSetupTask();
                yield return new PerformUndoTask();
                yield return new CleanupVerificationTask();
                yield return new UnlockReloadAssembliesTask();
                yield return new ClearProgressBarTask();
                yield break;
            }

            if (settings.PlayModeInEditorIncluded() && !PlayerSettings.runPlayModeTestAsEditModeTest)
            {
                yield return new SaveModifiedSceneTask();
                yield return new LegacyPlayModeRunTask();
                yield break;
            }

            if (settings.PlayerIncluded())
            {
                yield return new LegacyPlayerRunTask();
                yield break;
            }
        }

        internal Action<TestJobRunner, TestJobData> RegisterRun = TestJobDataHolder.instance.RegisterRun;
        internal Action<TestJobRunner, TestJobData> UnregisterRun = TestJobDataHolder.instance.UnregisterRun;

        internal Action<EditorApplication.CallbackFunction> SubscribeCallback =
            (callback) => EditorApplication.update += callback;

        // ReSharper disable once DelegateSubtraction
        internal Action<EditorApplication.CallbackFunction> UnsubscribeCallback =
            (callback) => EditorApplication.update -= callback;

        internal TestCommandPcHelper PcHelper = new EditModePcHelper();
        internal Func<ExecutionSettings, IEnumerable<TestTaskBase>> GetTasks = GetTaskList;
        internal Action<Exception> LogException = Debug.LogException;
        internal Action<string> LogError = Debug.LogError;
        internal Action<string> ReportRunFailed = CallbacksDelegator.instance.RunFailed;
        internal Action<Action<PlayModeStateChange>> SubscribePlayModeStateChanged =
            (callback) => EditorApplication.playModeStateChanged += callback;
        internal Action<Action<PlayModeStateChange>> UnsubscribePlayModeStateChanged =
            (callback) => EditorApplication.playModeStateChanged -= callback;
        internal Func<TestRunnerApi.RunProgressChangedEvent> RunProgressChanged = () => TestRunnerApi.runProgressChanged;

        private TestJobData m_JobData;
        private IEnumerator m_Enumerator = null;

        public void RunJob(TestJobData data)
        {
            if (data == null)
            {
                throw new ArgumentException(null, nameof(data));
            }
            
            if (data.taskInfoStack == null)
            {
                throw new ArgumentException($"{nameof(data.taskInfoStack)} on {nameof(TestJobData)} is null.", nameof(data));
            }

            if (IsRunningJob())
            {
                throw new Exception("TestJobRunner is already running a job.");
            }

            if (data.isHandledByRunner)
            {
                throw new Exception("Test job is already being handled.");
            }

            m_JobData = data;
            m_JobData.isHandledByRunner = true;

            if (!IsRunningJob())
            {
                m_JobData.isRunning = true;
                m_JobData.taskInfoStack.Push(new TestJobData.TaskInfo());
                RegisterRun(this, m_JobData);
            }
            else // Is resuming run
            {
                var taskInfoBeforeResuming = m_JobData.taskInfoStack.Peek();
                if (taskInfoBeforeResuming.taskMode != TestJobData.TaskMode.Resume)
                {
                    m_JobData.taskInfoStack.Push(new TestJobData.TaskInfo
                    {
                        taskMode = TestJobData.TaskMode.Resume,
                        index = 0,
                        stopBeforeIndex = taskInfoBeforeResuming.index
                    });
                }
                else
                {
                    taskInfoBeforeResuming.index = 0;
                }
            }

            m_JobData.Tasks = GetTasks(data.executionSettings).ToArray();

            if (!data.executionSettings.runSynchronously)
            {
                SubscribePlayModeStateChanged(PlaymodeStateChanged);
                SubscribeCallback(ExecuteCallback);
            }
            else
            {
                while (data.isRunning)
                {
                    ExecuteStep();
                }
            }
        }

        private void ExecuteCallback()
        {
            ExecuteStep();
            var c = 0;
            while (ShouldExecuteInstantly())
            {
                ExecuteStep();
                c++;

                if (c > 100)
                {
                    Debug.LogError("Too many instant steps in test execution mode: " + m_JobData.taskInfoStack.Peek()?.taskMode);
                    StopRun();
                    return;
                }
            }
        }

        private void ExecuteStep()
        {
            try
            {
                if (m_JobData.taskInfoStack.Count == 0)
                {
                    StopRun();
                    return;
                }

                var taskInfo = m_JobData.taskInfoStack.Peek();

                if (m_Enumerator == null)
                {
                    if (taskInfo.index >= m_JobData.Tasks.Length || (taskInfo.stopBeforeIndex > 0 && taskInfo.index >= taskInfo.stopBeforeIndex))
                    {
                        m_JobData.taskInfoStack.Pop();
                        return;
                    }

                    var task = m_JobData.Tasks[taskInfo.index];
                    if (!task.ShouldExecute(taskInfo))
                    {
                        taskInfo.index++;
                        return;
                    }

                    m_Enumerator = task.Execute(m_JobData);
                    if (task.SupportsResumingEnumerator)
                    {
                        PcHelper.SetEnumeratorPC(m_Enumerator, taskInfo.pc);
                    }
                }
                if (!m_JobData.executionSettings.runSynchronously && m_JobData.taskInfoStack.Count == 1 && taskInfo.taskMode == TestJobData.TaskMode.Normal)
                {
                    ReportRunProgress(false);
                }

                if (!m_Enumerator.MoveNext())
                {
                    taskInfo.index++;
                    taskInfo.pc = 0;
                    m_Enumerator = null;
                    return;
                }

                if (m_JobData.Tasks[taskInfo.index].SupportsResumingEnumerator)
                {
                    taskInfo.pc = PcHelper.GetEnumeratorPC(m_Enumerator);
                }
            }
            catch (TestRunCanceledException)
            {
                StopRun();
            }
            catch (AggregateException ex)
            {
                MarkJobAsError();
                LogError(ex.Message);
                foreach (var innerException in ex.InnerExceptions)
                {
                    LogException(innerException);
                }

                ReportRunFailed("Multiple unexpected errors happened while running tests.");
            }
            catch (Exception ex)
            {
                MarkJobAsError();
                LogException(ex);
                ReportRunFailed("An unexpected error happened while running tests.");
            }
        }

        private bool ShouldExecuteInstantly()
        {
            if (m_JobData.taskInfoStack.Count == 0)
            {
                return false;
            }

            var taskInfo = m_JobData.taskInfoStack.Peek();
            return taskInfo.taskMode != TestJobData.TaskMode.Normal;
        }

        private void PlaymodeStateChanged(PlayModeStateChange stateChange)
        {
            if (stateChange != PlayModeStateChange.EnteredEditMode)
            {
                return;
            }
            
            var taskInfoBeforeStateChange = m_JobData.taskInfoStack.Peek();
            m_JobData.taskInfoStack.Push(new TestJobData.TaskInfo
            {
                taskMode = TestJobData.TaskMode.EnteredEditMode,
                index = 0,
                stopBeforeIndex = taskInfoBeforeStateChange.index
            });
            m_Enumerator = null;
        }

        private bool IsRunningJob()
        {
            return m_JobData != null && m_JobData.taskInfoStack != null && m_JobData.taskInfoStack.Count > 0;
        }

        private void StopRun()
        {
            m_JobData.isRunning = false;
            UnsubscribeCallback(ExecuteCallback);
            UnsubscribePlayModeStateChanged(PlaymodeStateChanged);
            UnregisterRun(this, m_JobData);

            foreach (var task in m_JobData.Tasks)
            {
                if (task is IDisposable disposableTask)
                {
                    try
                    {
                        disposableTask.Dispose();
                    }
                    catch (Exception e)
                    {
                        Debug.LogException(e);
                    }
                }
            }
            
            if (!m_JobData.executionSettings.runSynchronously)
            {
                ReportRunProgress(true);
            }
        }

        private void ReportRunProgress(bool runHasFinished)
        {
            RunProgressChanged().Invoke(new TestRunProgress()
            {
                CurrentStageName = m_JobData.currentStage?.title ?? "",
                CurrentStage = m_JobData.currentStage?.index ?? 0,
                NumTotalStages = m_JobData.Tasks.OfType<JobStageTask>().Count(),
                        
                CurrentStepName = m_JobData.currentStep?.title ?? "",
                CurrentStep = m_JobData.currentStep?.index ?? 0,
                NumTotalSteps = m_JobData.currentStage?.totalStepsInStage ?? 0,
                        
                ExecutionSettings = m_JobData.executionSettings,
                RunGuid = m_JobData.guid ?? "",
                HasFinished = runHasFinished,
            });
        }

        private void MarkJobAsError()
        {
            var currentTaskInfo = m_JobData.taskInfoStack.Peek();
            currentTaskInfo.taskMode = TestJobData.TaskMode.Error;
            currentTaskInfo.index++;
            currentTaskInfo.pc = 0;
            m_Enumerator = null;
        }
    }
}