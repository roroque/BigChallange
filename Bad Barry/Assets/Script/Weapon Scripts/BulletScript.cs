﻿using UnityEngine;
using System.Collections;

public class BulletScript : MonoBehaviour {
	public float speed = 10;
	public int maxDamage = 1;
	public int minDamage = 2;
	public int baseDamage = 0;
	public int direction = 0;
	public int angle = 0;
	public GameObject origin;
	// Use this for initialization
	void Start () {

		//Destroy (gameObject, 1);
		//shoot up
		if (direction == 0) {
			
			transform.Rotate(0,0,90);
			
		}
		//shoot right
		if (direction == 1) {
			
			transform.Rotate(0,0,0,0);
			
			
			
		}
		//shoot down
		if (direction == 2) {
			
			transform.Rotate(0,0,270,0);
			
			
			
		}
		//shoot left
		if (direction == 3) {
			
			transform.Rotate(0,0,180,0);
			
			
			
		}
	
	}
	
	// Update is called once per frame
	void Update () {

		var behave = GameObject.FindGameObjectWithTag("Behaviour").GetComponent<GameBehavior>();
		if(!behave.pause){
			//partial solution check when reworking classes
			if(angle == 0){

				transform.Translate(Vector3.right * (speed * Time.deltaTime));
			


			}else{

				transform.Translate(new Vector3(Mathf.Cos(angle  * (float)(Mathf.PI / 180.0)),Mathf.Sin(angle  * (float)(Mathf.PI / 180.0)),0) * (speed * Time.deltaTime));


			}



		}
	}

	void OnTriggerEnter2D (Collider2D col){


		var maxDamageCurrent = maxDamage + (int)(maxDamage * (float)(baseDamage / 50.0));

		var minDamageCurrent = minDamage + (int)(minDamage * (float)(baseDamage / 50.0));

		if (col.gameObject.tag == "Player" && col.gameObject != origin) {


			col.gameObject.GetComponent<Player>().TakeDamage(Random.Range(minDamageCurrent,maxDamageCurrent));
			Destroy (this.gameObject);
			return;

		}


		if (col.gameObject.tag == "Enemy" && col.gameObject.tag == origin.tag && col.gameObject != origin) {
			
			Destroy (this.gameObject);
			return;

				
		}

		if (col.gameObject.tag == "Enemy" && col.gameObject != origin) {

			col.gameObject.GetComponent<Enemy>().TakeDamage(Random.Range(minDamageCurrent,maxDamageCurrent));

			Destroy (this.gameObject);
			return;

		}


		if (col.gameObject.tag == "Wall") {
			Destroy(this.gameObject);
			return;

		}


		if (col.gameObject.tag == "Destructable" && origin.tag == "Player") {

			col.gameObject.GetComponent<Appear>().AppearThing();
			Destroy(this.gameObject);
			Destroy(col.gameObject);
			return;

		}
		if (col.gameObject.tag == "Destructable" && origin.tag == "Enemy") {
			
			Destroy(this.gameObject);
			return;
			
		}


	}
}
