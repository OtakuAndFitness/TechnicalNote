using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using System.IO;
using TreeEditor;
using UnityEngine.Rendering;

public class AdvancedNoiseGenerator : EditorWindow
{
    private int texWidth;

    // int texHeight;
    private int octaves;
    private float persistence;
    private float scale;
    private float ratio;
    private string texName;
    private string[] options = {"Perlin", "Worley", "WorleyForCloud", "PerlinWorley"};
    private int index;
    private ComputeShader noiseGenerator = (ComputeShader) Resources.Load("Shaders/PerlinWorley.compute");
    
    
    enum NoiseType
    {
        Perlin,
        Worley,
        WorleyForCloud,
        PerlinWorley
    }
    
    [MenuItem("Tools/个性化噪声图")]
    static void Init(){
        GetWindow(typeof(AdvancedNoiseGenerator)).Show();
    }

    void GenerateNoiseTexture(NoiseType type){
        switch (type)
        {
            case NoiseType.Perlin:
                Perlin();
                break;
            case NoiseType.Worley:
                Worley();
                break;
            case NoiseType.WorleyForCloud:
                WorleyForCloud();
                break;
            case NoiseType.PerlinWorley:
                PerlinWorley();
                break;
        }

    }

    void Perlin()
    {
        RenderTexture rt = new RenderTexture(texWidth, texWidth, 0, RenderTextureFormat.ARGB32);
        rt.enableRandomWrite = true;
        rt.Create();
        
        int kernelPerlin = noiseGenerator.FindKernel("Perlin");
        noiseGenerator.SetFloat("pRes", texWidth);
        noiseGenerator.SetInt("octaves", octaves);
        noiseGenerator.SetFloat("persistence", persistence);
        noiseGenerator.SetFloat("scale", scale);
        noiseGenerator.SetTexture(kernelPerlin,"PerlinTex",rt);
        noiseGenerator.Dispatch(kernelPerlin,texWidth/8,texWidth/8,1);
        
        Save2D(rt,NoiseType.Perlin);
    }

    void Worley()
    {
        RenderTexture rt = new RenderTexture(texWidth, texWidth, 0, RenderTextureFormat.ARGB32);
        rt.enableRandomWrite = true;
        rt.Create();
        
        int kernelWorley = noiseGenerator.FindKernel("Worley");
        noiseGenerator.SetFloat("wRes", texWidth);
        noiseGenerator.SetInt("octaves", octaves);
        noiseGenerator.SetFloat("persistence", persistence);
        noiseGenerator.SetFloat("scale", scale);
        noiseGenerator.SetTexture(kernelWorley,"WorleyTex",rt);
        noiseGenerator.Dispatch(kernelWorley,texWidth/8,texWidth/8,1);
        
        Save2D(rt,NoiseType.Worley);
    }

    void PerlinWorley()
    {
        RenderTexture rt = new RenderTexture(texWidth, texWidth, 0, RenderTextureFormat.ARGB32);
        rt.enableRandomWrite = true;
        rt.dimension = TextureDimension.Tex2D;
        rt.Create();
        
        int kernelPerlinAndWorley = noiseGenerator.FindKernel("PerlinAndWorley");
        
        RenderTexture[] layers = new RenderTexture[texWidth];
        
        for (int i = 0; i < texWidth; i++)
        {
            noiseGenerator.SetFloat("pwRes", texWidth);
            noiseGenerator.SetInt("octaves", octaves);
            noiseGenerator.SetFloat("persistence", persistence);
            noiseGenerator.SetFloat("scale", scale);
            noiseGenerator.SetFloat("perlinToWorleyRatio",ratio);
            noiseGenerator.SetInt("layer",i);
            noiseGenerator.SetTexture(kernelPerlinAndWorley,"PerlinWorley",rt);
            noiseGenerator.Dispatch(kernelPerlinAndWorley,texWidth/8,texWidth/8,1);
            layers[i] = rt;
        }
        
        Save3D(layers,NoiseType.PerlinWorley);
        
    }

    void WorleyForCloud()
    {
        RenderTexture rt = new RenderTexture(texWidth, texWidth, 0, RenderTextureFormat.ARGB32);
        rt.enableRandomWrite = true;
        rt.dimension = TextureDimension.Tex2D;
        rt.Create();
        
        int kernelWorleyCloud = noiseGenerator.FindKernel("WorleyCloud");
        
        RenderTexture[] layers = new RenderTexture[texWidth];

        for (int i = 0; i < texWidth; i++)
        {
            noiseGenerator.SetFloat("pwRes", texWidth);
            noiseGenerator.SetInt("octaves", octaves);
            noiseGenerator.SetFloat("persistence", persistence);
            noiseGenerator.SetFloat("scale", scale);
            noiseGenerator.SetTexture(kernelWorleyCloud,"WorleyForCloud",rt);
            noiseGenerator.Dispatch(kernelWorleyCloud,texWidth/8,texWidth/8,1);
            layers[i] = rt;
        }
        
        Save3D(layers,NoiseType.WorleyForCloud);
    }

    void Save2D(RenderTexture rt, NoiseType type)
    {
        Texture2D tex = new Texture2D(texWidth, texWidth, TextureFormat.ARGB32, true);
        RenderTexture.active = rt;
        tex.ReadPixels(new Rect(0,0,texWidth,texWidth),0,0);
        tex.Apply();

        string res = GetTexName(type);
        
        AssetDatabase.CreateAsset(tex,Application.dataPath + "/Res/Textures/" + res + ".tga");
        AssetDatabase.SaveAssets();
        AssetDatabase.Refresh();
        EditorUtility.DisplayDialog("成功",res + "噪声图已在Assets/Res/Textures目录下生成！","确定","取消");
    }

    void Save3D(RenderTexture[] rts, NoiseType type)
    {
        Texture2D[] finalSlices = new Texture2D[texWidth];
        for (int i = 0; i < texWidth; i++)
        {
            finalSlices[i] = ConvertRTToTexture(rts[i]);
        }

        Texture3D cube = new Texture3D(texWidth, texWidth, texWidth, TextureFormat.ARGB32,true);
        Color[] pixel = cube.GetPixels();
        for (int i = 0; i < texWidth; i++)
        {
            Color[] layerPixel = finalSlices[i].GetPixels();
            for (int j = 0; j < texWidth; j++)
            {
                for (int k = 0; k < texWidth; k++)
                {
                    pixel[j + k * texWidth + i * texWidth * texWidth] = layerPixel[j + k * texWidth];
                }
            }
        }
        cube.SetPixels(pixel);
        cube.Apply();
        
        string res = GetTexName(type);
        
        AssetDatabase.CreateAsset(cube,Application.dataPath + "/Res/Textures/" + res + ".asset");
        AssetDatabase.SaveAssets();
        AssetDatabase.Refresh();
        EditorUtility.DisplayDialog("成功",res + "噪声图已在Assets/Res/Textures目录下生成！","确定","取消");

    }

    Texture2D ConvertRTToTexture(RenderTexture rt)
    {
        Texture2D tex = new Texture2D(texWidth, texWidth, TextureFormat.ARGB32, false);
        RenderTexture.active = rt;
        tex.ReadPixels(new Rect(0,0,texWidth,texWidth),0,0);
        tex.Apply();
        return tex;
    }

    string GetTexName(NoiseType type)
    {
        string res = "";
        switch (type)
        {
            case NoiseType.Perlin:
                res = "Perlin";
                break;
            case NoiseType.Worley:
                res = "Worley";
                break;
            case NoiseType.WorleyForCloud:
                res = "WorleyForCloud";
                break;
            case NoiseType.PerlinWorley:
                res = "PerlinWorley";
                break;
        }

        return res;
    }
    

    private void OnGUI() {
        EditorGUILayout.BeginHorizontal();
        texName = EditorGUILayout.TextField("图片名: ", texName);
        EditorGUILayout.EndHorizontal();
        
        EditorGUILayout.BeginHorizontal();
        index = EditorGUILayout.Popup("噪声图模式: ",index,options);
        EditorGUILayout.EndHorizontal();

        EditorGUILayout.BeginHorizontal();
        texWidth = EditorGUILayout.IntField("图片长宽: ", texWidth);
        EditorGUILayout.EndHorizontal();

        EditorGUILayout.BeginHorizontal();
        octaves = EditorGUILayout.IntField("叠加多少个噪声: ", octaves);
        EditorGUILayout.EndHorizontal();
        
        EditorGUILayout.BeginHorizontal();
        persistence = EditorGUILayout.FloatField("每个噪声按照多少比例叠: ", persistence);
        EditorGUILayout.EndHorizontal();
        
        EditorGUILayout.BeginHorizontal();
        scale = EditorGUILayout.FloatField("Scale: ", scale);
        EditorGUILayout.EndHorizontal();
        
        EditorGUILayout.BeginHorizontal();
        ratio = EditorGUILayout.Slider("混合比例: ", ratio,0f, 1f);
        EditorGUILayout.EndHorizontal();
        
        EditorGUILayout.BeginHorizontal();
        if (GUILayout.Button("生成")){
            if (texWidth < 1){
                Debug.LogError("图片高或宽必须大于1");
                return;
            }

            // if (!Mathf.IsPowerOfTwo(texWidth) || !Mathf.IsPowerOfTwo(texHeight))
            // {
            //     Debug.LogWarning("图片高或宽最好是2的次方数");
            // }

            if (!Mathf.IsPowerOfTwo(texWidth))
            {
                texWidth = Mathf.ClosestPowerOfTwo(texWidth);
            }

            // if (!Mathf.IsPowerOfTwo(texHeight))
            // {
            //     texHeight = Mathf.ClosestPowerOfTwo(texHeight);
            // }
            
            if (texName == null || texName.Length < 1){
                Debug.LogError("请为图片命名");
                return;
            }

            NoiseType noiseType = NoiseType.Perlin;
            switch (index)
            {
                case 0:
                    noiseType = NoiseType.Perlin;
                    break;
                case 1:
                    noiseType = NoiseType.Worley;
                    break;
                case 2:
                    noiseType = NoiseType.WorleyForCloud;
                    break;
                case 3:
                    noiseType = NoiseType.PerlinWorley;
                    break;
            }
            GenerateNoiseTexture(noiseType);

        }

        EditorGUILayout.EndHorizontal();
    }
}
