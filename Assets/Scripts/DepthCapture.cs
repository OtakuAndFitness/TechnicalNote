using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DepthCapture : MonoBehaviour
{
    [Range(0,2)]
    public float shadowBias;
    [Range(0,1)]
    public float shadowStrength;
    private Camera myCamera;
    private Shader shadowMap;
    // Start is called before the first frame update
    void Start()
    {
        myCamera = GetComponent<Camera>();
        shadowMap = Shader.Find("Unlit/ShadowMap");
            
        Matrix4x4 lightProjectionMatrix = GetLightProjectionMatrix(myCamera);
        Shader.SetGlobalMatrix("_LightMatrix",lightProjectionMatrix);

        myCamera.enabled = false;

        Shader.SetGlobalFloat("_TextureWidth",myCamera.targetTexture.width);
        Shader.SetGlobalFloat("_TextureHeight",myCamera.targetTexture.height);

    }

    private Matrix4x4 GetLightProjectionMatrix(Camera cam){
        Matrix4x4 worldToView = cam.worldToCameraMatrix;
        Matrix4x4 viewtoProj = GL.GetGPUProjectionMatrix(cam.projectionMatrix,false);
        
        return viewtoProj * worldToView;
    }

    // Update is called once per frame
    void Update()
    {
        if (myCamera != null){

            Shader.SetGlobalTexture("_DepthTexture", myCamera.targetTexture);
            myCamera.RenderWithShader(shadowMap,"RenderType");

            Shader.SetGlobalFloat("_Bias",shadowBias);
            Shader.SetGlobalFloat("_Strength",shadowStrength);

        }
    }
}
