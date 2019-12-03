using System;
using System.Collections.Generic;
using NUnit.Framework.Interfaces;
using UnityEditor.SceneManagement;
using UnityEditor.TestTools.TestRunner.Api;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.TestRunner.Utils;
using UnityEngine.TestTools;
using UnityEngine.TestTools.TestRunner;
using UnityEngine.TestTools.TestRunner.GUI;

namespace UnityEditor.TestTools.TestRunner
{
    internal class EditModeLauncher : TestLauncherBase
    {
        // provided for backward compatibility with Rider UnitTesting prior to Rider package v.1.1.1
        public EditModeLauncher(TestRunnerFilter filter, TestPlatform platform)
        {
            var apiFilter = new[]
            {
                new Filter()
                {
                    testMode = TestMode.EditMode,
                    testNames = filter.testNames,
                    categoryNames = filter.categoryNames,
                    groupNames = filter.groupNames,
                    assemblyNames = filter.assemblyNames
                }
            };
            
            ScriptableObject.CreateInstance<TestRunnerApi>().Execute(new ExecutionSettings(apiFilter));
        }

        public override void Run()
        {
            
        }
    }
}
