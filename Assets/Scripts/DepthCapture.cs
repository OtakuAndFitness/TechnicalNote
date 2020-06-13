using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DepthCapture : MonoBehaviour
{
    public RenderTexture depthTexture;
    private Camera myCamera;
    private Shader shadowMap;
    // Start is called before the first frame update
    void Start()
    {
        myCamera = GetComponent<Camera>();
        shadowMap = Shader.Find("Unlit/ShadowMap");
    }

    // Update is called once per frame
    void Update()
    {
        if (myCamera != null){
            myCamera.enabled = false;

            Shader.SetGlobalTexture("_DepthTexture", myCamera.targetTexture);
            Shader.SetGlobalFloat("_TextureWidth",depthTexture.width);
            Shader.SetGlobalFloat("_TextureHeight",depthTexture.height);

            myCamera.RenderWithShader(shadowMap,"RenderType");
        }
    }
}
