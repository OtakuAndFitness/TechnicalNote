using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering;

public static class GraphicsHelper
{
    private static Mesh mMesh;

    private static Mesh mesh{
        get{
            if (mMesh != null){
                return mMesh;
            }
            mMesh = new Mesh();
            mMesh.vertices = new Vector3[]{
                              new Vector3(-1,-1,0),
                              new Vector3(-1,1,0),
                              new Vector3(1,1,0),
                              new Vector3(1,-1,0)
            };
            mMesh.uv = new Vector2[]{
                        new Vector2(0,1),
                        new Vector2(0,0),
                        new Vector2(1,0),
                        new Vector2(1,1)
            };
            mMesh.SetIndices(new int[]{0,1,2,3},MeshTopology.Quads,0);
            return mMesh;
        }
    }

    public static void BlitSRT(this CommandBuffer buffer,RenderTargetIdentifier source, RenderTargetIdentifier destination,Material material, int pass){
        buffer.SetGlobalTexture(ShaderID._MainTex,source);
        buffer.SetRenderTarget(destination);
        buffer.DrawMesh(mesh,Matrix4x4.identity,material,0,pass);
    }

    public static void BlitStencil(this CommandBuffer buffer,RenderTargetIdentifier colorSrc, RenderTargetIdentifier colorBuffer, RenderTargetIdentifier depthStencilBuffer,Material material,int pass){
        buffer.SetGlobalTexture(ShaderID._MainTex,colorSrc);
        buffer.SetRenderTarget(colorBuffer,depthStencilBuffer);
        buffer.DrawMesh(mesh,Matrix4x4.identity,material,0,pass);
    }

}
