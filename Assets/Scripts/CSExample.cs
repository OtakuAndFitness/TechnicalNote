using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CSExample : MonoBehaviour
{
    public bool isTextureMode = true;
    public Texture inputTex;
    public ComputeShader computeShader;
    public ComputeShader csBuffer;
    public RawImage image;
    ComputeBuffer buffer;



    // Start is called before the first frame update
    void Start()
    {
        if (isTextureMode){
            GameObject.Find("Canvas").SetActive(true);
            TextureGray();
        }else{
            GameObject.Find("Canvas").SetActive(false);
            CSFib();
        }
        
    }

    public void TextureGray(){
        RenderTexture t = new RenderTexture(inputTex.width,inputTex.height,24);
        t.enableRandomWrite = true;
        t.Create();
        image.texture = t;
        image.SetNativeSize();

        int kernel = computeShader.FindKernel("Gray");
        computeShader.SetTexture(kernel,"inputTexture",inputTex);
        computeShader.SetTexture(kernel,"outputTexture",t);
        computeShader.Dispatch(kernel,inputTex.width / 8, inputTex.height / 8,1);
    }

    public void CSFib(){
        int[] total = new int[32];
        buffer = new ComputeBuffer(32,sizeof(int));
        int kernel = csBuffer.FindKernel("Fibonacci");
        csBuffer.SetBuffer(kernel,"buffer",buffer);
        csBuffer.Dispatch(kernel,1,1,1);
        buffer.GetData(total);
        for (int i = 0; i < total.Length; i++)
        {
            Debug.Log(total[i]);
        }

    }

    private void OnDestroy() {
        if (!isTextureMode){
            buffer.Release();
        }
    }
}
