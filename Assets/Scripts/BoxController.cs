using System;
using System.Collections;
using System.Collections.Generic;
using UnityEditor.SceneManagement;
using UnityEngine;

public class BoxController : MonoBehaviour {

	private Rigidbody rb;
	public float speed = 2f;
	public float jumpForce = 20f;
	void Start () {
		rb = GetComponent<Rigidbody> ();
	}

	void FixedUpdate () {
		float moveHorizontal = Input.GetAxis ("Horizontal");
		float moveVertical = Input.GetAxis ("Vertical");
		float jump = Input.GetAxis ("Jump");

		Vector3 movement = new Vector3 (-moveVertical, 0, moveHorizontal);

		transform.Translate (movement * speed * Time.deltaTime);
		rb.AddForce (0, jump * jumpForce, 0);
	}
}
