using System;
using System.Collections.Generic;
using NUnit.Framework.Interfaces;
using UnityEditor.SceneManagement;
using UnityEditor.TestTools.TestRunner.Api;
using UnityEditor.TestTools.TestRunner.TestRun.Tasks;
using UnityEngine;
using UnityEngine.TestTools.TestRunner;

namespace UnityEditor.TestTools.TestRunner.TestRun
{
    [Serializable]
    internal class TestJobData : ISerializationCallbackReceiver 
    {
        [SerializeField] 
        public string guid;
        
        [NonSerialized] 
        public Stack<TaskInfo> taskInfoStack = new Stack<TaskInfo>();

        [SerializeField] 
        private TaskInfo[] savedTaskInfoStack;

        [SerializeField] 
        public bool isRunning;
        
        [SerializeField]
        public ExecutionSettings executionSettings;

        [SerializeField] 
        public StageInfo currentStage;
        
        [SerializeField] 
        public StepInfo currentStep = new StepInfo();
        
        [SerializeField]
        public string[] existingFiles;

        [SerializeField] 
        public int undoGroup = -1;

        [SerializeField] 
        public EditModeRunner editModeRunner;

        [NonSerialized] 
        public bool isHandledByRunner;

        [SerializeField]
        public SceneSetup[] SceneSetup;

        [SerializeField] 
        public TestProgress testProgress;
        
        [NonSerialized] 
        public TestTaskBase[] Tasks;
        
        public ITest testTree;
        
        [NonSerialized]
        public TestStartedEvent TestStartedEvent;
        [NonSerialized]
        public TestFinishedEvent TestFinishedEvent;
        [NonSerialized]
        public RunStartedEvent RunStartedEvent;
        [NonSerialized]
        public RunFinishedEvent RunFinishedEvent;
        
        
        public TestJobData(ExecutionSettings settings)
        {
            guid = Guid.NewGuid().ToString();
            executionSettings = settings;
            isRunning = false;
        }

        internal enum TaskMode
        {
            Normal,
            Error,
            Resume,
            EnteredEditMode,
            PredictSteps,
        }

        [Serializable]
        internal class TaskInfo
        {
            [SerializeField] 
            public int index;
            
            [SerializeField] 
            public int stopBeforeIndex;
            
            [SerializeField] 
            public int pc;

            [SerializeField] 
            public TaskMode taskMode = TaskMode.Normal;
        }

        [Serializable]
        internal class StageInfo
        {
            [SerializeField]
            public int index;
            [SerializeField]
            public string title;
            [SerializeField]
            public int totalStepsInStage;
        }
        
        [Serializable]
        internal class StepInfo
        {
            [SerializeField]
            public int indexBeforeCurrentTask;
            [SerializeField]
            public int index;
            [SerializeField]
            public string title;
        }

        public void OnBeforeSerialize()
        {
            savedTaskInfoStack = taskInfoStack.ToArray();
        }

        public void OnAfterDeserialize()
        {
            taskInfoStack = new Stack<TaskInfo>(savedTaskInfoStack);
        }
    }
}
