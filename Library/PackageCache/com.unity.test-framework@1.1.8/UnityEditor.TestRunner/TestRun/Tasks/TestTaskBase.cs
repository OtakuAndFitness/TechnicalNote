using System.Collections;

namespace UnityEditor.TestTools.TestRunner.TestRun.Tasks
{
    internal abstract class TestTaskBase
    {
        protected ErrorRunMode RunOnError = ErrorRunMode.DoNotRunOnError;
        
        public bool RerunAfterResume;
        public bool RerunAfterEnteredEditMode;
        public bool SupportsResumingEnumerator;
        public bool RunOnPredictSteps;
        public bool RunOnCancel;

        public abstract IEnumerator Execute(TestJobData testJobData);

        public enum ErrorRunMode
        {
            DoNotRunOnError,
            RunOnlyOnError,
            RunAlways
        } 

        public bool ShouldExecute(TestJobData.TaskInfo taskInfo)
        {
            switch (taskInfo.taskMode)
            {
                case TestJobData.TaskMode.Error:
                    return RunOnError == ErrorRunMode.RunAlways || RunOnError == ErrorRunMode.RunOnlyOnError;
                case TestJobData.TaskMode.Resume:
                    return RerunAfterResume;
                case TestJobData.TaskMode.EnteredEditMode:
                    return RerunAfterEnteredEditMode;
                case TestJobData.TaskMode.PredictSteps:
                    return RunOnPredictSteps;
                default:
                    return RunOnError != ErrorRunMode.RunOnlyOnError;
            }
        }
    }
}