using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering;

[ExecuteInEditMode]
[RequireComponent(typeof(Camera))]
public class SubsurfaceScatterPostProcessing : MonoBehaviour
{
    [Range(2,50)]
    public int nSamples = 25;
    [Range(0,3)]
    public float scaler = 0.1f;
    public Color strength;
    public Color falloff;
    Camera mCam;
    CommandBuffer buffer;
    Material mMat;

    private static int SceneID = Shader.PropertyToID("_SceneID");//用一个数代表现当前RT,_SceneID没有用在任何地方，这样返回的数不会和其他冲突
    private static int SSSScaler = Shader.PropertyToID("_SSSScaler");
    private static int SSSKernel = Shader.PropertyToID("_Kernel");
    private static int SSSSamples = Shader.PropertyToID("_Samples");

    private void OnEnable() {
        mCam = GetComponent<Camera>();
        mCam.depthTextureMode |= DepthTextureMode.Depth;
        mMat = new Material(Shader.Find("Unlit/SSS"));
        
        buffer = new CommandBuffer();
        buffer.name = "Separable Subsurface Scatter";
        mCam.clearStencilAfterLightingPass = true;
        mCam.AddCommandBuffer(CameraEvent.AfterForwardOpaque,buffer);
    }

    private void OnPreRender() {
        Vector3 normalizedStrength = Vector3.Normalize(new Vector3(strength.r,strength.g,strength.b));
        Vector3 normalizedFallOff = Vector3.Normalize(new Vector3(falloff.r,falloff.g,falloff.b));
        List<Vector4> kernel = KernelCalculator.CalculateKernel(nSamples,normalizedStrength,normalizedFallOff);
        mMat.SetInt(SSSSamples,nSamples);
        mMat.SetVectorArray(SSSKernel,kernel);
        mMat.SetFloat(SSSScaler,scaler);

        buffer.Clear();
        buffer.GetTemporaryRT(SceneID,mCam.pixelWidth,mCam.pixelHeight,0,FilterMode.Trilinear,RenderTextureFormat.DefaultHDR);
        buffer.BlitStencil(BuiltinRenderTextureType.CameraTarget,SceneID,BuiltinRenderTextureType.CameraTarget,mMat,0);
        buffer.BlitSRT(SceneID,BuiltinRenderTextureType.CameraTarget,mMat,1);
    }


    private void OnDisable() {
        buffer.ReleaseTemporaryRT(SceneID);
        mCam.RemoveCommandBuffer(CameraEvent.AfterForwardOpaque,buffer);
        buffer.Release();
    }
}
