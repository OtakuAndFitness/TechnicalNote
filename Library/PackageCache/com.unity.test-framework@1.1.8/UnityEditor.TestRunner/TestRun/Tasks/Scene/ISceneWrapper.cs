namespace UnityEditor.TestTools.TestRunner.TestRun.Tasks.Scene
{
    using Scene = UnityEngine.SceneManagement.Scene;
    
    internal interface ISceneWrapper
    {
        Scene WrappedScene { get; }
        bool isDirty { get; }
        string path { get; }
    }
}