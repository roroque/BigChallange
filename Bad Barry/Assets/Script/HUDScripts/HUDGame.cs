﻿using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class HUDGame: MonoBehaviour {

	public Menu currentMenu;
	
	//HUD life
	public GameObject health;
	public GameObject xp;
	public GameObject lvlUp;
	public GameObject ammo;
	public Sprite[] images;
	public GameObject ammoImage;

	public static bool isPaused = false;

//	public GameObject infinity;

	public GameBehavior behave;
	
	
	void Start () {
//		behave = GameObject.FindGameObjectWithTag("Behaviour").GetComponent<GameBehavior>();


	}
	
	void Update () {

//		if (behave.selectedWeapon == 0)
//			infinity.SetActive (true);
//		else
//			infinity.SetActive (false);
	}
	
	public void initLife(){


		var player = GameObject.FindGameObjectWithTag("Player").GetComponent<Player>();

		float healthValue = (float)player.life/(float)player.maxLife;
		float xpValue = (float)player.experience/(float)player.neededExperience;


		health.transform.localScale = new Vector3(healthValue,1f,1f);
		xp.transform.localScale = new Vector3(xpValue,1f,1f);



	}

	public void changeAmmoType(int type){

		var imagem = ammoImage.GetComponent<Image>();
		imagem.sprite = images[type];


	}

	//called from player receives number of bullets on selected weapon
	public void bullets(string value){

		ammo.GetComponent<Text>().text = value;

	}
	
	public void takeDamage(){
		var player = GameObject.FindGameObjectWithTag("Player").GetComponent<Player>();

		float healthValue = (float)player.life / (float)player.maxLife;

		health.transform.localScale = new Vector3(healthValue,1f,1f);
	}

	public void incrementXp(){

		var player = GameObject.FindGameObjectWithTag("Player").GetComponent<Player>();
		float xpValue = (float)player.experience/(float)player.neededExperience;

		xp.transform.localScale = new Vector3(xpValue,1f,1f);

	}
	
	public void playerDead(){

		health.transform.localScale = new Vector3(0f,1f,1f);

	}

	public void showMenu(){
		//pausar o jogo e tirar a nitidez do fundo



		var behave = GameObject.FindGameObjectWithTag("Behaviour").GetComponent<GameBehavior>();
		if(behave.life > 0){
			currentMenu.IsOpen = !currentMenu.IsOpen;
			behave.pause = !behave.pause;
		}



		
	}

	public void levelUp(){

		lvlUp.GetComponent<Animator>().SetTrigger("level");

	}

}
