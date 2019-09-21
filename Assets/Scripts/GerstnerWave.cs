using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GerstnerWave : MonoBehaviour
{
    Mesh mesh;
    Vector3[] vertices;
    Vector3[] dest;
    [Range(0,1)]
    public float steepness;
    public float amplitude;
    [Range(1,50)]
    public int[] period;
    [Range(0.5f,10f)]
    public float[] speed;
    [SerializeField]
    public Vector2[] waveDir;

    // Start is called before the first frame update
    void Start()
    {
        mesh = GetComponent<MeshFilter>().mesh;
        vertices = mesh.vertices;
        dest = new Vector3[vertices.Length];

    }

    // Update is called once per frame
    void Update()
    {
        if (waveDir.Length != speed.Length || waveDir.Length != period.Length){
            Debug.LogError("Variables set not correct");
            return;
        }
        for (int i=0;i<vertices.Length;i++){
            Vector3 v = vertices[i];
            for (int j=0;j<waveDir.Length;j++){
                float wi = (2 * Mathf.PI) / period[j];
                float inner = wi * Vector2.Dot(waveDir[j],new Vector2(v.x,v.z)) + speed[j] * Time.time;
                float Qi = steepness / wi;
                v.x += Qi * waveDir[j].x * Mathf.Cos(inner);
                v.z += Qi * waveDir[j].y * Mathf.Cos(inner);
                v.y += amplitude * Mathf.Sin(inner);
            }
            dest[i] = v;
        }
        mesh.vertices = dest;
        mesh.RecalculateBounds();
        mesh.RecalculateNormals();
    }
}
