using System.Collections;

namespace UnityEditor.TestTools.TestRunner.TestRun.Tasks
{
    internal class JobStageTask : TestTaskBase
    {
        private string m_Title;

        public JobStageTask(string title)
        {
            m_Title = title;
            RunOnPredictSteps = true;
        }

        public override IEnumerator Execute(TestJobData testJobData)
        {
            var taskInfo = testJobData.taskInfoStack.Peek();
            if (taskInfo.taskMode == TestJobData.TaskMode.PredictSteps)
            {
                testJobData.taskInfoStack.Pop();
                yield break;
            }
            
            var previousStage = testJobData.currentStage;
            testJobData.currentStage = new TestJobData.StageInfo()
            {
                index = previousStage != null ? previousStage.index + 1 : 0,
                title = m_Title,
                totalStepsInStage = 1
            };

            testJobData.currentStep = new TestJobData.StepInfo()
            {
                index = 1,
                title = "Calculating stages"
            };
            
            testJobData.taskInfoStack.Push(new TestJobData.TaskInfo()
            {
                index = taskInfo.index + 1,
                pc = 0,
                taskMode = TestJobData.TaskMode.PredictSteps
            });
        }
    }
}