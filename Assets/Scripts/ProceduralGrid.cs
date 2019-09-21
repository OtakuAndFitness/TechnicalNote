using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ProceduralGrid : MonoBehaviour
{
    public int xGrid = 1;
    public int yGrid = 1;
    Mesh m_mesh;
    public Vector2 size = Vector2.one;

    void Awake() {
        Generate();
    }

    void OnValidate() {
        Generate();
    }

    private void Generate(){
        if (xGrid < 1 || yGrid < 1){
            Debug.LogError("xGrid and yGrid must be positive int");
            return;
        }
        m_mesh = new Mesh();
        m_mesh.name = "MyMesh";
        int count = (xGrid + 1) * (yGrid + 1);
        Vector3[] vertices = new Vector3[count];
        Vector2[] uv = new Vector2[count];
        int[] triangles = new int[xGrid * yGrid * 6];

        for (int vIdx=0,y = 0;y<=yGrid;y++){
            for (int x=0;x<=xGrid;x++,vIdx++){
                vertices[vIdx] = new Vector3(size.x * ((float)x / xGrid - 0.5f), 0, size.y * ((float)y / yGrid - 0.5f));
                uv[vIdx] = new Vector2((float)x/xGrid,(float)y/yGrid);
            }
        }
        for (int vIdx=0,tIdx=0,y=0;y<yGrid;y++,vIdx++){
            for (int x=0;x<xGrid;x++,vIdx++,tIdx+=6){
                triangles[tIdx] = vIdx;
                triangles[tIdx+1] = triangles[tIdx+4] = vIdx+xGrid+1;
                triangles[tIdx+2] = triangles[tIdx+3] = vIdx+1;
                triangles[tIdx+5] = vIdx + xGrid + 2;
            }
        }
        
        m_mesh.vertices = vertices;
        m_mesh.uv = uv;
        m_mesh.triangles = triangles;
        m_mesh.RecalculateBounds();
        m_mesh.RecalculateNormals();
        // m_mesh.RecalculateTangents();

        GetComponent<MeshFilter>().mesh = m_mesh;
        MeshCollider meshCollider = GetComponent<MeshCollider>();
        if (meshCollider != null){
            meshCollider.sharedMesh = m_mesh;
        }

                
    }
}
