using System;
using System.Collections;
using System.IO;
using NUnit.Framework;
using UnityEditor.TestTools.TestRunner.UnityTestProtocol;
using UnityEngine;

namespace UnityEditor.TestTools.TestRunner.TestRun.Tasks
{
    internal class EnableTestOutLoggerTask : TestTaskBase, IDisposable
    {
        internal Action<Application.LogCallback> SubscribeLogMessageReceivedThreaded =
            (callback) => Application.logMessageReceivedThreaded += callback;
        internal Action<Application.LogCallback> UnsubscribeLogMessageReceivedThreaded =
            (callback) => Application.logMessageReceivedThreaded -= callback;

        internal Func<TextWriter> GetCurrentContextWriter = () => TestContext.Out;

        private bool StateChangeCallbackRegistered;

        public EnableTestOutLoggerTask()
        {
            RerunAfterResume = true;
            RerunAfterEnteredEditMode = true;
        }
        
        public override IEnumerator Execute(TestJobData testJobData)
        {
            if (StateChangeCallbackRegistered)
            {
                UnsubscribeLogMessageReceivedThreaded(LogReceived);
            }
            
            SubscribeLogMessageReceivedThreaded(LogReceived);
            StateChangeCallbackRegistered = true;
            yield break;
        }

        private void LogReceived(string message, string stacktrace, LogType type)
        {
            if (message.StartsWith(UtpDebugLogger.UtpPrefix))
            {
                return;
            }
            
            var writer = GetCurrentContextWriter();
            if (writer != null)
            {
                writer.WriteLine(message);
            }
        }

        public void Dispose()
        {
            UnsubscribeLogMessageReceivedThreaded(LogReceived);
        }
    }
}