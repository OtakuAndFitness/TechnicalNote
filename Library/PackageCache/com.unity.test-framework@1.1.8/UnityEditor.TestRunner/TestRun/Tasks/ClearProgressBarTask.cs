using System;
using System.Collections;

namespace UnityEditor.TestTools.TestRunner.TestRun.Tasks
{
    internal class ClearProgressBarTask : TestTaskBase
    {
        internal Action ClearProgressBar = EditorUtility.ClearProgressBar;
        public ClearProgressBarTask()
        {
            RunOnError = ErrorRunMode.RunAlways;
        }
        
        public override IEnumerator Execute(TestJobData testJobData)
        {
            ClearProgressBar();
            yield break;
        }
    }
}