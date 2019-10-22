using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering;


[RequireComponent(typeof(Camera))]
public class BloomForSelection : MonoBehaviour
{
    [Range(0,10)]
    public float intensity = 2;
    public Color glowColor = new Color(1,1,1,1);
    public List<GameObject> targetObjects = new List<GameObject>();
    private Material compositeMat;
    private Material preMat;
    private Material blurMat;
    [Range(0,6)]
    public int blurDownSample = 0;
    [Range(1,4)]
    public int blurNums = 2;
    private RenderTexture blurTex;
    private RenderTexture preTex;
    private RenderTexture temp;
    private CommandBuffer cmd;
    public bool isOutline = false;
    public float outlineStrength = 0.5f;

    private void OnValidate() {
        GetComponent<Camera>().depthTextureMode = DepthTextureMode.Depth;

        compositeMat = new Material(Shader.Find("Unlit/GlowComposite"));
        blurMat = new Material(Shader.Find("Hidden/SeparableGlassBlur"));

        if (isOutline){
            preMat = new Material(Shader.Find("Unlit/Replace"));
            compositeMat.EnableKeyword("_ISOUTLINE_ON");
        }
        
        preTex = RenderTexture.GetTemporary(Screen.width >> blurDownSample, Screen.height >> blurDownSample,24,RenderTextureFormat.Default);
        blurTex = RenderTexture.GetTemporary(Screen.width >> blurDownSample, Screen.height >> blurDownSample,0);
        
        cmd = new CommandBuffer();
        cmd.SetRenderTarget(preTex);
        cmd.ClearRenderTarget(true,true,Color.black);
        foreach(GameObject go in targetObjects){
            Renderer[] renderers = go.GetComponentsInChildren<Renderer>();
            foreach(Renderer r in renderers){
                preMat = r.sharedMaterial;
                cmd.DrawRenderer(r,preMat);
            }
        }
        temp = RenderTexture.GetTemporary(blurTex.width,blurTex.height);
        cmd.Blit(preTex,blurTex);
        for (int i=0;i<blurNums;i++){
            cmd.SetGlobalVector("offsets",new Vector4(Mathf.Pow(2.0f, i+1) / (Screen.width >> blurDownSample),0,0,0));
            cmd.Blit(blurTex,temp,blurMat);
            cmd.SetGlobalVector("offsets",new Vector4(0,Mathf.Pow(2.0f, i+1) / (Screen.width >> blurDownSample),0,0));
            cmd.Blit(temp,blurTex,blurMat);
        }
        compositeMat.SetTexture("_PreTex",preTex);
        compositeMat.SetTexture("_blurTex", blurTex);
        compositeMat.SetFloat("_Intensity",intensity);
        compositeMat.SetColor("_GlowColor",glowColor);
        if (isOutline){
            compositeMat.SetFloat("_Distance",outlineStrength);
        }
    }

    private void OnRenderImage(RenderTexture src, RenderTexture dest) {
        Graphics.ExecuteCommandBuffer(cmd);
        Graphics.Blit(src,dest,compositeMat);

    }

    private void OnDisable() {
        RenderTexture.ReleaseTemporary(temp);
        RenderTexture.ReleaseTemporary(preTex);
        RenderTexture.ReleaseTemporary(blurTex);
    }
}
