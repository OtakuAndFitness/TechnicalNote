using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering;

public class FogController : MonoBehaviour
{
    public Material mat;
    public Material blend;
    private Camera cam;
    private Transform camTrans;
    private CommandBuffer cmd;
    // private RenderTexture temp,temp2; 
    // Start is called before the first frame update
    void Start() {
        cam = GetComponent<Camera>();
        cam.depthTextureMode |= DepthTextureMode.Depth;

        cmd = new CommandBuffer();
        cmd.name = "Fog";

        int fogID = Shader.PropertyToID("_FogTex");
        cmd.GetTemporaryRT(fogID,-1,-1,24,FilterMode.Bilinear);
        int fogID2 = Shader.PropertyToID("_Temp");
        cmd.GetTemporaryRT(fogID2,-1,-1,24,FilterMode.Bilinear);
        cmd.Blit(BuiltinRenderTextureType.CurrentActive,fogID2);
        cmd.Blit(fogID2,fogID);
        
        cmd.Blit(fogID,fogID2,mat);
        cmd.SetGlobalTexture("_FogTex",fogID2);
        cmd.Blit(fogID, BuiltinRenderTextureType.CameraTarget,blend);
        cam.AddCommandBuffer(CameraEvent.BeforeForwardAlpha,cmd);

    }

    void OnDestroy() {
        cam.RemoveCommandBuffer(CameraEvent.BeforeForwardAlpha,cmd);
        cmd.Clear();
    }

 
	void Update() {
        camTrans = cam.transform;

        Matrix4x4 frustumCornors = Matrix4x4.identity;
        float fov = cam.fieldOfView;
        float near = cam.nearClipPlane;
        float far = cam.farClipPlane;
        float aspect = cam.aspect;

        float fovWHalf = fov * 0.5f;

        Vector3 toRight = camTrans.right * near * Mathf.Tan (fovWHalf * Mathf.Deg2Rad) * aspect;
        Vector3 toTop = camTrans.up * near * Mathf.Tan (fovWHalf * Mathf.Deg2Rad);

        Vector3 topLeft = (camTrans.forward * near - toRight + toTop);
        float camScale = topLeft.magnitude * far/near;

        topLeft.Normalize();
        topLeft *= camScale;

        Vector3 topRight = (camTrans.forward * near + toRight + toTop);
        topRight.Normalize();
        topRight *= camScale;

        Vector3 bottomRight = (camTrans.forward * near + toRight - toTop);
        bottomRight.Normalize();
        bottomRight *= camScale;

        Vector3 bottomLeft = (camTrans.forward * near - toRight - toTop);
        bottomLeft.Normalize();
        bottomLeft *= camScale;

        frustumCornors.SetRow(0, bottomLeft);
        frustumCornors.SetRow(1, bottomRight);
        frustumCornors.SetRow(2, topRight);
        frustumCornors.SetRow(3, topLeft);

        mat.SetMatrix("_Ray", frustumCornors);
    }
}
