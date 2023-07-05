using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using System.IO;
using UnityEngine.Windows;
using Directory = System.IO.Directory;
using File = System.IO.File;

public class SaveTexture : EditorWindow
{
    public int textureSize = 1024;
    public string texName = "SkinLut";
    public static string savedPath;
    private Texture2D tex;

    [MenuItem("Tools/Create Skin Lut")]
    public static void ShowWindow()
    {
        savedPath = Application.dataPath;
        GetWindow(typeof(SaveTexture));
    }

    private void OnGUI()
    {
        GUILayout.Label("Create Skin Lut", EditorStyles.boldLabel);
        textureSize = EditorGUILayout.IntField("Texture Size", textureSize);
        textureSize = Mathf.Abs(textureSize);
        if (!Mathf.IsPowerOfTwo(textureSize))
        {
            textureSize = Mathf.ClosestPowerOfTwo(textureSize);
        }
        if (textureSize == 0){
            textureSize = 64;
        }
        texName = EditorGUILayout.TextField("Texuture Name", texName);
        if (string.IsNullOrEmpty(texName))
        {
            texName = "SkinLut";
        }
        GUILayout.Label("Address", EditorStyles.miniBoldLabel);
        GUILayout.BeginHorizontal();
        {
            savedPath = EditorGUILayout.TextField(savedPath, GUILayout.Width(240));
            if (GUILayout.Button("Browse", GUILayout.Width(100)))
            {
                savedPath = EditorUtility.SaveFolderPanel("Save Texture", savedPath, "");
            }
        }
        GUILayout.EndHorizontal();
        if (GUILayout.Button("Save Texture"))
        {
            Save();
        }
    }

    private void Save()
    {
        RenderTexture rt = new RenderTexture(textureSize, textureSize, 0, RenderTextureFormat.ARGB32,
            RenderTextureReadWrite.sRGB);
        tex = new Texture2D(textureSize, textureSize, TextureFormat.ARGB32, true);
        MeshRenderer renderer = GameObject.Find("Quad")?.GetComponent<MeshRenderer>();
        if (renderer == null)
        {
            EditorUtility.DisplayDialog("Error", "You need to go to PreIntergratedLUT scene", "OK");
            return;
        }
        Material mat = renderer.sharedMaterial;
        Graphics.Blit(null,rt,mat);
        RenderTexture previousActive = RenderTexture.active;
        RenderTexture.active = rt;
        tex.ReadPixels(new Rect(0,0,textureSize,textureSize),0,0,false);
        tex.Apply();
        RenderTexture.active = previousActive;
        
        // string savedPath = "/Resources/Textures/" + texName + ".tga";
        if (string.IsNullOrEmpty(savedPath))
        {
            savedPath = Application.dataPath;
        }
        bool isValid = Directory.Exists(savedPath);
        if (!isValid)
        {
            Debug.LogError(savedPath);
            EditorUtility.DisplayDialog("Error", "Invalid path!", "OK");
            return;
        }
        if (!savedPath.Contains(Application.dataPath))
        {
            EditorUtility.DisplayDialog("Error", "Texture needs to be saved in the project!", "OK");
            return;
        }
        string filePath = Path.Combine(savedPath, texName + ".tga");
        File.WriteAllBytes(filePath, tex.EncodeToTGA());

        // DestroyImmediate(tex);
        
        AssetDatabase.ImportAsset(filePath);
        
        AssetDatabase.Refresh();

        string relativePath = Path.GetRelativePath(Application.dataPath, filePath);
        TextureImporter importer = (TextureImporter)AssetImporter.GetAtPath(Path.Combine("Assets",relativePath));
        importer.sRGBTexture = false;
        importer.SaveAndReimport();
            
        AssetDatabase.Refresh();

        EditorUtility.DisplayDialog("Success", "Texture saved!", "OK");
        
    }
}
