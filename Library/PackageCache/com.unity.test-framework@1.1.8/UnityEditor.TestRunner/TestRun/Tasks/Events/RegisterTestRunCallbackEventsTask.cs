using System;
using System.Collections;
using UnityEngine;
using UnityEngine.TestRunner.Utils;

namespace UnityEditor.TestTools.TestRunner.TestRun.Tasks.Events
{
    internal class RegisterTestRunCallbackEventsTask : TestTaskBase
    {
        private TestRunCallbackListener m_Listener;
        public RegisterTestRunCallbackEventsTask()
        {
            RerunAfterResume = true;
        }
        
        internal Func<TestRunCallbackListener> GetListener = () => ScriptableObject.CreateInstance<TestRunCallbackListener>();
        public override IEnumerator Execute(TestJobData testJobData)
        {
            m_Listener = GetListener();
            testJobData.RunStartedEvent.AddListener(v => m_Listener.RunStarted(v));
            testJobData.TestStartedEvent.AddListener(v => m_Listener.TestStarted(v));
            testJobData.TestFinishedEvent.AddListener(v => m_Listener.TestFinished(v));
            testJobData.RunFinishedEvent.AddListener(v => m_Listener.RunFinished(v));
            yield break;
        }
    }
}