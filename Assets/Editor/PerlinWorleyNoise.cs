using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using System.IO;
using TreeEditor;
using UnityEngine.Rendering;

public class PerlinWorleyNoise : EditorWindow
{
    private int texWidth = 128;
    private int octaves = 6;
    private float persistence = 0.5f;
    private int scale = 50;
    private float ratio = 0.5f;
    private string texName;
    private string[] options = {"Perlin", "Worley", "WorleyForCloud", "PerlinWorley"};
    private int index;
    private ComputeShader noiseGenerator;
    
    
    enum NoiseType
    {
        Perlin,
        Worley,
        WorleyForCloud,
        PerlinWorley
    }
    
    [MenuItem("Tools/高级噪声图")]
    static void ShowWindow(){
        GetWindow(typeof(PerlinWorleyNoise)).Show();
    }

    #region NoiseGenerator

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
        
        Save2D(rt);
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
        
        Save2D(rt);
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
        
        Save3D(layers);
        
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
        
        Save3D(layers);
    }

    void Save2D(RenderTexture rt)
    {
        Texture2D tex = ConvertRTToTexture(rt);

        // string res = GetTexName(type);
        
        AssetDatabase.CreateAsset(tex,Application.dataPath + "/Res/Textures/" + texName + ".tga");
        AssetDatabase.SaveAssets();
        AssetDatabase.Refresh();
        EditorUtility.DisplayDialog("成功",texName + "噪声图已在Assets/Res/Textures目录下生成！","确定","取消");
    }

    void Save3D(RenderTexture[] rts)
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
        
        // string res = GetTexName(type);
        
        AssetDatabase.CreateAsset(cube,Application.dataPath + "/Res/Textures/" + texName + ".asset");
        AssetDatabase.SaveAssets();
        AssetDatabase.Refresh();
        EditorUtility.DisplayDialog("成功",texName + "噪声图已在Assets/Res/Textures目录下生成！","确定","取消");

    }

    Texture2D ConvertRTToTexture(RenderTexture rt)
    {
        Texture2D tex = new Texture2D(texWidth, texWidth, TextureFormat.ARGB32, false);
        RenderTexture.active = rt;
        tex.ReadPixels(new Rect(0,0,texWidth,texWidth),0,0);
        tex.Apply();
        
        return tex;
    }

    // string GetTexName(NoiseType type)
    // {
    //     string res = "";
    //     switch (type)
    //     {
    //         case NoiseType.Perlin:
    //             res = "Perlin";
    //             break;
    //         case NoiseType.Worley:
    //             res = "Worley";
    //             break;
    //         case NoiseType.WorleyForCloud:
    //             res = "WorleyForCloud";
    //             break;
    //         case NoiseType.PerlinWorley:
    //             res = "PerlinWorley";
    //             break;
    //     }
    //
    //     return res;
    // }

    #endregion
    
    

    private void OnGUI() {
        EditorGUILayout.BeginHorizontal();
        noiseGenerator = AssetDatabase.LoadAssetAtPath<ComputeShader>("Assets/Resources/Shaders/PerlinWorley.compute");
        noiseGenerator = (ComputeShader)EditorGUILayout.ObjectField("Shader使用: ", noiseGenerator, typeof(ComputeShader), true);
        EditorGUILayout.EndHorizontal();
        
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
        octaves = EditorGUILayout.IntSlider("叠加多少个噪声: ", octaves,1,10);
        EditorGUILayout.EndHorizontal();
        
        EditorGUILayout.BeginHorizontal();
        persistence = EditorGUILayout.Slider("每个噪声按照多少比例叠: ", persistence,0,1);
        EditorGUILayout.EndHorizontal();
        
        EditorGUILayout.BeginHorizontal();
        scale = EditorGUILayout.IntSlider("Scale: ", scale,1,100);
        EditorGUILayout.EndHorizontal();

        if (index > 2)
        {
            EditorGUILayout.BeginHorizontal();
            ratio = EditorGUILayout.Slider("混合比例: ", ratio,0f, 1f);
            EditorGUILayout.EndHorizontal();
        }
        
        
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

            // if (!Mathf.IsPowerOfTwo(texHeight))
            // {
            //     texHeight = Mathf.ClosestPowerOfTwo(texHeight);
            // }
            
            if (texName == null || texName.Length < 1){
                Debug.LogError("请为图片命名");
                return;
            }
            
            if (!Mathf.IsPowerOfTwo(texWidth))
            {
                texWidth = Mathf.ClosestPowerOfTwo(texWidth);
            }

            NoiseType noiseType = NoiseType.Perlin;
            switch (index)
            {
                case 0:
                    noiseType = NoiseType.Perlin;
                    if (texWidth > 1024)
                    {
                        texWidth = 1024;
                    }
                    break;
                case 1:
                    noiseType = NoiseType.Worley;
                    if (texWidth > 1024)
                    {
                        texWidth = 1024;
                    }
                    break;
                case 2:
                    noiseType = NoiseType.WorleyForCloud;
                    if (texWidth > 256)
                    {
                        texWidth = 256;
                    }
                    break;
                case 3:
                    noiseType = NoiseType.PerlinWorley;
                    if (texWidth > 256)
                    {
                        texWidth = 256;
                    }
                    break;
            }
            GenerateNoiseTexture(noiseType);

        }

        EditorGUILayout.EndHorizontal();
    }
}
