using UnityEngine.SceneManagement;
namespace UnityEditor.TestTools.TestRunner.TestRun.Tasks.Scene
{
    using Scene = UnityEngine.SceneManagement.Scene;
    
    internal class SceneWrapper : ISceneWrapper
    {
        private Scene m_WrappedScene;

        public SceneWrapper(Scene wrappedScene)
        {
            m_WrappedScene = wrappedScene;
        }

        public Scene WrappedScene
        {
            get { return m_WrappedScene; }
        }

        public bool isDirty
        {
            get { return m_WrappedScene.isDirty; }
        }

        public string path
        {
            get { return m_WrappedScene.path; }
        }
    }
}