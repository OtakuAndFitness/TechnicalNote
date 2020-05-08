using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FFTOcean : MonoBehaviour
{
    public ComputeShader fftOcean;
    public Material oceanMat;
    public int iterations = 9;
    public int meshSize = 250;
    public int meshLength = 512;
    public float A = 70.0f;
    public int windScale = 30;
    public Vector2 wind;
    public float heightScale = 50.0f;
    public float displaceScale = 100.0f;
    public float timeScale = 5.0f;
    private int N;
    private float time;
    private MeshFilter filter;
    private Mesh mesh;
    private RenderTexture HeightTex;
    private RenderTexture XDisplaceTex;
    private RenderTexture ZDisplaceTex;
    private RenderTexture DisplaceTex;
    private RenderTexture NormalTex;
    private RenderTexture BubbleTex;
    private RenderTexture OutputRT;
    private int kernelInitHeightSpectrum;
    private int kernelInitDisplaceSpectrum;
    private int kernelDisplaceTexture;
    private int kernelInitNormalAndBubble;
    private int kernelHorizontalFFT;
    private int kernelVerticalFFT;


    // Start is called before the first frame update
    void Start()
    {
        // GameObject ocean = new GameObject("Ocean");
        filter = gameObject.AddComponent<MeshFilter>();
        mesh = new Mesh();
        filter.mesh = mesh;

        gameObject.AddComponent<MeshRenderer>().material = oceanMat;

        GenerateMesh();
        InitCSValue();

    }

    #region MeshCreate
    void GenerateMesh(){
        Vector3[] vertices = new Vector3[meshSize * meshSize];
        Vector3[] normals = new Vector3[meshSize * meshSize];
        Vector2[] uvs = new Vector2[meshSize * meshSize];
        int[] indices = new int[(meshSize - 1) * (meshSize - 1) * 6];

        int indicesIndex = 0;
        float halfResolution = meshSize / 2.0f;

        for (int i = 0; i < meshSize; i++)
        {
            float horizontalPos = (i - halfResolution) * (meshLength / meshSize);
            for (int j = 0; j < meshSize; j++)
            {
                int currentIndex = i * meshSize + j;
                float verticalPos = (j - halfResolution) * (meshLength / meshSize);
                vertices[currentIndex] = new Vector3(horizontalPos,0.0f,verticalPos);
                normals[currentIndex] = new Vector3(0.0f,1.0f,0.0f);
                uvs[currentIndex] = new Vector2(i / (meshSize - 1.0f),j / (meshSize - 1.0f));

                if (i != meshSize - 1 && j != meshSize - 1){
                    indices[indicesIndex++] = currentIndex;
                    indices[indicesIndex++] = currentIndex + 1;
                    indices[indicesIndex++] = currentIndex + meshSize + 1;

                    indices[indicesIndex++] = currentIndex;
                    indices[indicesIndex++] = currentIndex + meshSize + 1;
                    indices[indicesIndex++] = currentIndex + meshSize;
                }
            }
        }

        mesh.vertices = vertices;
        mesh.SetIndices(indices,MeshTopology.Triangles,0);
        mesh.normals = normals;
        mesh.uv = uvs;
        filter.mesh = mesh;

    }
    #endregion

    #region InitCSValue
    void InitCSValue(){
        N = (int)Mathf.Pow(2,iterations);
        HeightTex = CreateRT(N);
        XDisplaceTex = CreateRT(N);
        ZDisplaceTex = CreateRT(N);
        DisplaceTex = CreateRT(N);
        NormalTex = CreateRT(N);
        BubbleTex = CreateRT(N);
        OutputRT = CreateRT(N);
        
        kernelInitHeightSpectrum = fftOcean.FindKernel("InitHeightSpectrum");
        kernelInitDisplaceSpectrum = fftOcean.FindKernel("InitDisplaceSpectrum");
        kernelDisplaceTexture = fftOcean.FindKernel("DisplaceTexture");
        kernelInitNormalAndBubble = fftOcean.FindKernel("InitNormalAndBubbleTex");
        kernelHorizontalFFT = fftOcean.FindKernel("HorizontalFFT");
        kernelVerticalFFT = fftOcean.FindKernel("VerticalFFT");

        fftOcean.SetInt("N",N);
        fftOcean.SetInt("Length",meshLength);

        fftOcean.SetFloat("randomVal1",Random.value);
        fftOcean.SetFloat("randomVal2",Random.value);

    }

    private RenderTexture CreateRT(int size){
        RenderTexture rt = new RenderTexture(size,size,0,RenderTextureFormat.ARGBFloat);
        rt.enableRandomWrite = true;
        rt.Create();
        return rt;
    }
    #endregion

    #region UpdateOceanValue
    void UpdateOceanValue(){
        //初始化各个参数
        fftOcean.SetFloat("A",A);
        fftOcean.SetFloat("time",time);
        wind.Normalize();
        wind *= windScale;
        fftOcean.SetVector("wind",wind);
        fftOcean.SetFloat("displaceScale", displaceScale);
        fftOcean.SetFloat("heightScale", heightScale);

        //初始化高度频谱
        fftOcean.SetTexture(kernelInitHeightSpectrum,"HeightSpectrumRT",HeightTex);
        fftOcean.Dispatch(kernelInitHeightSpectrum,N/8,N/8,1);

        //初始化偏移频谱
        fftOcean.SetTexture(kernelInitDisplaceSpectrum,"HeightSpectrumRT",HeightTex);
        fftOcean.SetTexture(kernelInitDisplaceSpectrum,"DisplaceXSpectrumRT",XDisplaceTex);
        fftOcean.SetTexture(kernelInitDisplaceSpectrum,"DisplaceZSpectrumRT",ZDisplaceTex);
        fftOcean.Dispatch(kernelInitDisplaceSpectrum,N/8,N/8,1);
        
        for(int i=1;i<=iterations;i++){// horizontal fft
            int ns = (int)Mathf.Pow(2,i-1);
            fftOcean.SetInt("Ns",ns * 2);
            fftOcean.SetInt("iteration",i);
            FFT(kernelHorizontalFFT, ref HeightTex);
            FFT(kernelHorizontalFFT, ref XDisplaceTex);
            FFT(kernelHorizontalFFT, ref ZDisplaceTex);

        }

        for(int i=1;i<=iterations;i++){//vertical fft
            int ns = (int)Mathf.Pow(2,i-1);
            fftOcean.SetInt("Ns",ns * 2);
            fftOcean.SetInt("iteration",i);
            FFT(kernelVerticalFFT, ref HeightTex);
            FFT(kernelVerticalFFT, ref XDisplaceTex);
            FFT(kernelVerticalFFT, ref ZDisplaceTex);

        }

        //设置偏移纹理
        fftOcean.SetTexture(kernelDisplaceTexture,"HeightSpectrumRT",HeightTex);
        fftOcean.SetTexture(kernelDisplaceTexture,"DisplaceXSpectrumRT",XDisplaceTex);
        fftOcean.SetTexture(kernelDisplaceTexture,"DisplaceZSpectrumRT",ZDisplaceTex);
        fftOcean.SetTexture(kernelDisplaceTexture,"DisplaceRT",DisplaceTex);
        fftOcean.Dispatch(kernelDisplaceTexture,N/8,N/8,1);

        //初始化法线以及泡沫
        // fftOcean.SetTexture(kernelInitNormalAndBubble,"DisplaceRT",DisplaceTex);
        // fftOcean.SetTexture(kernelInitNormalAndBubble,"NormalRT",NormalTex);
        // fftOcean.SetTexture(kernelInitNormalAndBubble,"BubbleRT",BubbleTex);
        // fftOcean.Dispatch(kernelInitNormalAndBubble,N/8,N/8,1);

        SetMaterial();
    }

    private void FFT(int kernel, ref RenderTexture input){ 
        fftOcean.SetTexture(kernel,"InputRT",input);
        fftOcean.SetTexture(kernel,"OutputRT",OutputRT);
        fftOcean.Dispatch(kernel,N/8,N/8,1);

        RenderTexture rt = input;
        input = OutputRT;
        OutputRT = rt;

    }

    private void SetMaterial(){
        // oceanMat.SetTexture("_HeightTex",HeightTex);
        oceanMat.SetTexture("_DisplaceTex",DisplaceTex);
        oceanMat.SetTexture("_NormalTex",NormalTex);
        oceanMat.SetTexture("_BubbleTex",BubbleTex);
    } 

    // Update is called once per frame
    void Update()
    {
        time += Time.deltaTime * timeScale;
        UpdateOceanValue();
    }
    #endregion


    void OnDestroy() {
        HeightTex.Release();
        XDisplaceTex.Release();
        ZDisplaceTex.Release();
        DisplaceTex.Release();
        NormalTex.Release();
        BubbleTex.Release();
        OutputRT.Release();
    }
}
