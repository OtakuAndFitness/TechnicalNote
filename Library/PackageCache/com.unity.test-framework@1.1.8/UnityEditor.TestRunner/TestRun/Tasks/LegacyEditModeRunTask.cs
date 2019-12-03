using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.TestTools;

namespace UnityEditor.TestTools.TestRunner.TestRun.Tasks
{
    internal class LegacyEditModeRunTask : TestTaskBase
    {
        private bool m_WaitForDomainReload = false;
        
        public LegacyEditModeRunTask()
        {
            SupportsResumingEnumerator = true;
            RunOnPredictSteps = true;
        }
        
        public override IEnumerator Execute(TestJobData testJobData)
        {
            if (testJobData.taskInfoStack.Peek().taskMode == TestJobData.TaskMode.PredictSteps)
            {
                testJobData.currentStage.totalStepsInStage += GetNumSteps(testJobData);
                yield break;
            }

            testJobData.currentStep.indexBeforeCurrentTask = testJobData.currentStep.index;
            
            var editModeRunner = ScriptableObject.CreateInstance<EditModeRunner>();
            editModeRunner.UnityTestAssemblyRunnerFactory = new UnityTestAssemblyRunnerFactory();
            editModeRunner.Init(testJobData.executionSettings.filters, TestPlatform.EditMode, testJobData.executionSettings.runSynchronously, testJobData.testTree,
                testJobData.RunStartedEvent, testJobData.TestStartedEvent, testJobData.TestFinishedEvent, testJobData.RunFinishedEvent);
            
            var callback = editModeRunner.AddEventHandler<EditModeRunnerCallback>();
            callback.runner = editModeRunner;

            editModeRunner.Run();

            testJobData.editModeRunner = editModeRunner;
            
            while (testJobData.editModeRunner != null && !testJobData.editModeRunner.RunFinished)
            {
                var runner = testJobData.editModeRunner;
                if (runner.m_ResumeAfterDomainReload && !m_WaitForDomainReload)
                {
                    if (testJobData.testTree == null)
                    {
                        throw new Exception("Test tree is required to resume test execution.");
                    }
                    runner.Resume(testJobData.testTree, testJobData.RunStartedEvent, testJobData.TestStartedEvent, testJobData.TestFinishedEvent, testJobData.RunFinishedEvent);
                }
                runner.TestConsumer();
                m_WaitForDomainReload = runner.m_ResumeAfterDomainReload;
                if (!testJobData.executionSettings.runSynchronously)
                {
                    UpdateStepCount(testJobData);
                    yield return null;
                }
            }
        }

        private int GetNumSteps(TestJobData testJobData)
        {
            return testJobData.testProgress.AllTestsToRun.Length;
        }

        private int GetCurrentStepNumber(TestJobData testJobData)
        {
            return testJobData.testProgress.CompletedTests.Count;
        }

        private string GetCurrentStepTitle(TestJobData testJobData)
        {
            return testJobData.testProgress.CurrentTest;
        }

        private void UpdateStepCount(TestJobData testJobData)
        {
            testJobData.currentStep.index =
                testJobData.currentStep.indexBeforeCurrentTask + GetCurrentStepNumber(testJobData);
            testJobData.currentStep.title = GetCurrentStepTitle(testJobData);
        }
    }
}