using System;
using UnityEngine;

namespace UnityEditor.TestTools.TestRunner.Api
{
    [Serializable]
    internal class TestRunProgress
    {
        [SerializeField]
        public string RunGuid;
        [SerializeField]
        public ExecutionSettings ExecutionSettings;

        [SerializeField]
        public bool HasFinished;
        [SerializeField]
        public bool HasErrors;
        
        [SerializeField]
        public int CurrentStage;
        [SerializeField]
        public int NumTotalStages;
        [SerializeField]
        public string CurrentStageName;

        [SerializeField]
        public int CurrentStep;
        [SerializeField]
        public int NumTotalSteps;
        [SerializeField]
        public string CurrentStepName;
    }
}