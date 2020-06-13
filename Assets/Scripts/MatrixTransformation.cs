using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MatrixTransformation : MonoBehaviour
{
    private Camera lightCam;

    // Start is called before the first frame update
    void Start()
    {
        lightCam = GetComponentInChildren<Camera>();
        if (lightCam != null){
            Matrix4x4 lightProjectionMatrix = GetLightProjectionMatrix(lightCam);
            Shader.SetGlobalMatrix("_LightMatrix",lightProjectionMatrix);
        }
    }

    Matrix4x4 GetLightProjectionMatrix(Camera cam){
        Matrix4x4 worldToView = cam.worldToCameraMatrix;
        Matrix4x4 viewtoProj = GL.GetGPUProjectionMatrix(worldToView,false);
        
        return viewtoProj * worldToView;
    }
}
