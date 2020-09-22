using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using System.IO;
public class AdvancedNoiseGenerator : Editor
{
    [MenuItem("Tools/个性化噪声图")]
    static void Init(){
        EditorWindow.GetWindow(typeof(NoiseGenerator)).Show();
    }

    void GenerateNoiseTexture(){

    }

    private void OnGUI() {
        GenerateNoiseTexture();
    }
}
