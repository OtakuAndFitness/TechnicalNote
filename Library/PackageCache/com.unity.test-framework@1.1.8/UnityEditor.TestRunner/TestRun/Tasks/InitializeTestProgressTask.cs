using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using NUnit.Framework.Interfaces;

namespace UnityEditor.TestTools.TestRunner.TestRun.Tasks
{
    internal class InitializeTestProgressTask : TestTaskBase
    {
        public override IEnumerator Execute(TestJobData testJobData)
        {
            if (testJobData.testTree == null)
            {
                throw new RequiredTestRunDataMissingException(nameof(testJobData.testTree));
            }
            
            var allTests =
                GetTestsExpectedToRun(testJobData.testTree, testJobData.executionSettings.BuildNUnitFilter());
            testJobData.testProgress = new TestProgress(allTests.ToArray());
            yield break;
        }
        
        private static List<string> GetTestsExpectedToRun(ITest test, ITestFilter filter)
        {
            var expectedTests = new List<string>();

            if (filter.Pass(test))
            {
                if (test.IsSuite)
                {
                    expectedTests.AddRange(test.Tests.SelectMany(subTest => GetTestsExpectedToRun(subTest, filter)));
                }
                else
                {
                    expectedTests.Add(test.FullName);
                }
            }

            return expectedTests;
        }
    }
}