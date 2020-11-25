using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MotionVertexController : MonoBehaviour
{
    private Transform trans;
    private Material[ ] mats;
    private Vector3 lastPosition;
    private Vector3 newPosition;
    private Vector3 direction;
    private float t = 0;

    private RadialBlur radialBlur;
    public float speed = 200;
    public Camera mainCamera;
    public float waitTime = 1;
    // Start is called before the first frame update
    void Start()
    {
        trans = transform;
        lastPosition = newPosition = trans.position;

        //获取对象及子对象中的所有渲染器（MeshRenderer或者SkinnedMeshRenderer）
        var renderers = trans.GetComponentsInChildren<Renderer> ();
        //获取所有的材质球(针对有些对象有多个部件多个材质的情况)
        mats = new Material[renderers.Length];
        for (int i = 0; i < renderers.Length; i++)
        {
            mats[i] = renderers[i].sharedMaterial;
        }
       radialBlur = mainCamera.GetComponent<RadialBlur>();
    }

    // Update is called once per frame
    void Update()
    {
        newPosition = trans.position;

        //如果上一帧的位置追到了当前帧的位置，则重置t
        if (newPosition == lastPosition) t = 0;
        t += Time.deltaTime;
        //上一帧的位置通过t来做插值
        lastPosition = Vector3.Lerp (lastPosition, newPosition, t / 2);
        //求出移动的方向
        direction = lastPosition - newPosition;
        //遍历修改所有材质的_Direction属性
        foreach (var m in mats)
        {
            m.SetVector ("_Direction", new Vector4 (direction.x, direction.y, direction.z, m.GetVector ("_Direction").w));
        }

        if (Input.GetKeyDown(KeyCode.W)){
            transform.Translate(Vector3.forward * speed * Time.deltaTime,Space.World);
            radialBlur.enabled = true;
            // postProcessLayer.enabled = true;
            StartCoroutine(Stopper());
        }
        if (Input.GetKeyDown(KeyCode.A)){
            transform.Translate(Vector3.left * speed * Time.deltaTime,Space.World);
            radialBlur.enabled = true;
            // postProcessLayer.enabled = true;
            StartCoroutine(Stopper());
        }
        if (Input.GetKeyDown(KeyCode.D)){
            transform.Translate(Vector3.right * speed * Time.deltaTime,Space.World);
            radialBlur.enabled = true;
            // postProcessLayer.enabled = true;
            StartCoroutine(Stopper());
        }
        if (Input.GetKeyDown(KeyCode.S)){
            transform.Translate(-Vector3.forward * speed * Time.deltaTime,Space.World);
            // radialBlur.enabled = true;
            StartCoroutine(Stopper());
        }
        
    }

    IEnumerator Stopper(){
        yield return new WaitForSeconds(waitTime);
        radialBlur.enabled = false;
        StopCoroutine(Stopper());
    }
}
