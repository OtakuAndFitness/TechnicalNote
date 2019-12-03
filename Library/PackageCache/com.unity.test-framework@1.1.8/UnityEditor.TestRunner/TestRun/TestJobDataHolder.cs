using System;
using System.Collections.Generic;
using UnityEditor.TestTools.TestRunner.TestRun.Tasks;
using UnityEngine;

namespace UnityEditor.TestTools.TestRunner.TestRun
{
    internal class TestJobDataHolder : ScriptableSingleton<TestJobDataHolder>
    {
        [SerializeField]
        public List<TestJobData> TestRuns = new List<TestJobData>();

        [NonSerialized]
        public Dictionary<string, TestJobRunner> m_Runners = new Dictionary<string, TestJobRunner>();
        
        public void RegisterRun(TestJobRunner runner, TestJobData data)
        {
            TestRuns.Add(data);
            m_Runners.Add(data.guid, runner);
        }

        public void UnregisterRun(TestJobRunner runner, TestJobData data)
        {
            TestRuns.Remove(data);
            m_Runners.Remove(data.guid);
        }

        public TestJobRunner GetRunner(string guid)
        {
            return m_Runners.ContainsKey(guid) ? m_Runners[guid] : null;
        }
        
        [InitializeOnLoadMethod]
        private static void ResumeRunningJobs()
        {
            try
            {
                foreach (var testRun in instance.TestRuns.ToArray())
                {
                    if (testRun.isRunning)
                    {
                        var runner = new TestJobRunner();
                        runner.RunJob(testRun);
                        instance.m_Runners[testRun.guid] = runner;
                    }
                    else
                    {
                        instance.TestRuns.Remove(testRun);
                    }
                }
            }
            catch (Exception ex)
            {
                Debug.LogException(ex);
                EditorUtility.ClearProgressBar();
                EditorApplication.UnlockReloadAssemblies();
                instance.TestRuns.Clear();
            }
        }
    }
}