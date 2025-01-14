﻿using UnityEngine;
using System.Collections;

public class Enemy : MonoBehaviour {

	public int coinsWhenDie = 5;

	private GameBehavior behave;

	public GameObject[] bulletBox;



	public int lvl = 1;

	public int life = 50;
	public int baseDamage = 0;
	public int shootDirection = 0;
	public GameObject weapon;

	public int selectedWeapon = 0;

	public float experience = 0;
	
	private Animator bothAnimator;
	private Animator torsoAnimator;
	private Animator legAnimator;
	
	public bool isShooting = false;
	
	public bool dead = false;
	
	public float fireRate = 1f;
	private float time;

	// Use this for initialization
	void Start () {
		life = 50;
		bothAnimator = transform.GetComponent<Animator> ();
		legAnimator = transform.Find("Legs").GetComponent<Animator>();
		torsoAnimator = transform.Find("Torso").GetComponent<Animator>();
		incrementLifeByLevel(lvl);


	
	}


	public void incrementLifeByLevel(int level){

		life = life * lvl;
		lvl = level;

	}
	
	// Update is called once per frame
	void Update () {
	
		var behave = GameObject.FindGameObjectWithTag("Behaviour").GetComponent<GameBehavior>();
		if(!behave.pause){

		Shoot();
		time = time + Time.deltaTime;
		}else{

			torsoAnimator.SetBool("Shooting",false);

		}

	}

	//take damage function damage is the damage taken
	public void TakeDamage(int damage){

		var x = transform.GetComponent<FollowPlayer> ();
		x.active = true;

		if (life <= damage) {
			
			life = 0;
			Die();
			
			
		} else {
			life = life - damage;	
		}
		
	}

	//death animation function
	void Die(){
		dead = true;
		legAnimator.SetBool ("IsDead", true);
		torsoAnimator.SetBool ("IsDead", true);
		bothAnimator.SetBool ("dead", true);
		isShooting = false;
		Destroy (transform.GetComponent<BoxCollider2D> ());

		var player = GameObject.FindGameObjectWithTag("Player");
		player.GetComponent<Player> ().IncrementXp (experience);
		if(Random.Range(1,4) == 2){
			Instantiate( bulletBox[Random.Range(0,(bulletBox.Length))],transform.position,transform.rotation);
		}

		behave = GameObject.FindGameObjectWithTag("Behaviour").GetComponent<GameBehavior>();
		behave.incCoins (coinsWhenDie);
		behave.enemiesKilled++;

		if(Application.loadedLevelName == "HordeMode"){

			behave.currentHordeKills++;

		}


	}



	void Shoot(){
		var player = GameObject.FindGameObjectWithTag("Player").GetComponent<Player>();
		var x = weapon.GetComponent<Weapon>().weapons[selectedWeapon];
		fireRate = x.GetComponent<WeaponStats>().fireRate;
		if (isShooting && !player.dead) {
			
			
			if (time > fireRate) {
				time = 0;
				weapon.GetComponent<Weapon> ().Shoot (shootDirection, (lvl * 10),selectedWeapon);

			}
			torsoAnimator.SetBool("Shooting",true);
			
			
			
		} else{
			
			torsoAnimator.SetBool("Shooting",false);
		}
		
	}


}
