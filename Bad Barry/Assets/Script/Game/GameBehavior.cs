﻿using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;
using System.Runtime.Serialization.Formatters.Binary;
using System.IO;
using UnityEngine.SocialPlatforms;
using UnityEngine.SocialPlatforms.GameCenter;
using System.Runtime.InteropServices;
using UnityEngine.SceneManagement;


public class GameBehavior : MonoBehaviour {

	private string hordeScoreBoardId = "hordeLeaderBoardBadBarry";
	//knife kills done
	private string knifel100Id = "knifel100Achiev";
	private string knifel500Id = "knifel500Achiev";
	private string knifel2000Id = "knifel2000Achiev";
	private string knifel10000Id = "knifel10000Achiev";
	//horde levels done
	private string horde10Id = "horde10Achiev";
	private string horde25Id = "horde25Achiev";
	private string horde50Id = "horde50Achiev";
	private string horde100Id = "horde100Achiev";
	//total earned coins done
	private string coins500Id = "coins500Achiev";
	private string coins1000Id = "coins1000Achiev";
	private string coins10000Id = "coins10000Achiev";
	private string coins100000Id = "coins100000Achiev";
	//attributes  achievs done
	private string agilityHighId = "agilityHighAchiev";
	private string strenghtyHighId = "strengthHighAchiev";
	private string inteligenceHighId = "inteligenceHighAchiev";
	private string vitalityHighId = "vitalityHighAchiev";
	//deaths achievs done
	private string death10Id = "death10Achiev";
	private string death100Id = "death100Achiev";
	private string death1000Id = "death1000Achiev";
	private string death10000Id = "death10000Achiev";

	//ammo achievs done
	private string ammo250Id = "ammo250Achiev";
	private string ammo1000Id = "ammo1000Achiev";
	private string ammo10000Id = "ammo10000Achiev";
	private string ammo100000Id = "ammo100000Achiev";

	//weapon achievs done
	private string submachineAchievId = "submachineAchiev";
	private string shotgunAchievId = "shotgunAchiev";


	//DllImport("__Internal")]
	//private static extern void ReportAchievement( string achievementID, float progress );

	private bool loadingSound = false; //assegura que tocará um audio por vez



	public int[] inventory = new int[10];

	public int[] abilityIDs = new int[3];
	public int abilityIndex = 0;

	public bool levelingUp = false;
	public int levelsUp = 0;
	public bool pause = false;
	public bool teste = false;


	public float experience = 0;
	public float neededExperience = 100;
	public int life = 100;
	public int maxLife = 100;
	public int energy = 5;



	//attributes points
	public int expendPoints = 0;

	private int strength = 10;
	private int agility = 10;
	private int inteligence = 10;
	private int vitality = 10;

	public int previousScene;

	public int selectedWeapon = 0;
	//vector for bullets
	public int[] bullets = new int[3];

	//inventory items
	private List<ItemData> inventoryItems;

	public float timer = 0;

	public float timeToEnergy = 180;


	public DateTime lastDateTime;

	//score and coins
	private int earnedCoins = 0;
	public int enemiesKilled = 0;
	public int totalEnemies = 0;

	public int coins;


	//statistics
	public int totalCoins = 0;
	public int maxHordeKills = 0;

	public int currentHordeKills = 0;

	
	public int ammoSpent = 0;
	public float totalExperience = 0;
	public int knifeKills = 0;
	public int totalDeaths = 0;
	public int totalEnemiesKilled = 0;


	//tutorial
	public bool showTutorial;
	public bool showMap;
	public bool showAttributes;
	public bool showStore;

	//missions

	public int currentMission = 1;

	public string toLoadScene = "";

	public bool goingToMission = false;

	public int selectedMission = 0;

	
	// Use this for initialization
	void Start () {
//		PanelSurvivor = GameObject.FindGameObjectWithTag ("SkillSurvivor") as GameObject;
		Environment.SetEnvironmentVariable("MONO_REFLECTION_SERIALIZER", "yes");

		currentMission = 1;
		if(Application.platform == RuntimePlatform.IPhonePlayer){
			
			GameCenterPlatform.ShowDefaultAchievementCompletionBanner(true);
			Social.localUser.Authenticate( success => {
				if (success){
					Debug.Log ("authenticated");
					
				}else
					Debug.Log ("Failed to authenticate");
			});
			

		}



		//on start get selected character points and get bullets
		load();


		pause = false;
		DontDestroyOnLoad (gameObject);
		DontDestroyOnLoad (this);
		if(inventory == null){

			inventory = new int[10];
		
		}
		if(abilityIDs == null){
			
			abilityIDs = new int[3];
			
		}
	
	}

	
	void ReportAchievement(string id,int percentage) {
		
		
		//use this when reporting achievment
		if(Application.platform == RuntimePlatform.IPhonePlayer){
			
			//ReportAchievement(id,percentage);
			
		}
		
	}
	
	void ReportScore(long score,string id){

	
		if(Application.platform == RuntimePlatform.IPhonePlayer){
			
			//ReportScoreDetailed(score,id);
			
		}
		
	}

	public void finishedHordeMode()
	{
		if(currentHordeKills > maxHordeKills){

			maxHordeKills = currentHordeKills;

		}

		currentHordeKills = 0;

		if(Application.platform == RuntimePlatform.IPhonePlayer){


			Social.localUser.Authenticate( success => {
				if (success)
					print("");
					//ReportScore(maxHordeKills,hordeScoreBoardId);
				else
					Debug.Log ("Failed to authenticate primeiro");
			});


			


		}
		
	}





	// Update is called once per frame
	void Update () {

		DateTime currentTime = DateTime.Now;
		TimeSpan ts = currentTime - lastDateTime;
		lastDateTime = currentTime;

		if (energy < 5) {
			timer = timer + (float)ts.TotalSeconds;
		}
	

		
		if (timer >= timeToEnergy) {
			energy = energy + (int)(timer / timeToEnergy);
			timer = timer - ((int)(timer / timeToEnergy) * timeToEnergy);
	
		}
		if (energy >= 5) {
			timer = 0;
			energy = 5;
		}
	}

	public void LevelCleared(){
		this.coins += earnedCoins;
		totalCoins+= earnedCoins;
		earnedCoins = 0;
		totalEnemiesKilled = totalEnemiesKilled + enemiesKilled;
		enemiesKilled = 0;
		totalEnemies = 0;

		CheckCoinsAchievements();

	}

	public void incCoins(int newCoins){

		earnedCoins += newCoins;
		CheckCoinsAchievements();


	}



	public void IncrementCoinHorde(){

		var behave = GameObject.FindGameObjectWithTag("Behaviour").GetComponent<GameBehavior>();
		behave.LevelCleared ();


		behave.finishedHordeMode();


	}


	public void incrementBullet(int weaponType,int maxBullets,int minBullets){

		bullets[weaponType] = bullets[weaponType] + UnityEngine.Random.Range(minBullets,maxBullets);

	}




	public void LeveledUp(int currentLvl){

		levelingUp = true;

		levelsUp++;
		expendPoints = expendPoints + currentLvl;

	}

	//go to scene states
	public void GoToAtributesScreen(AudioSource audio){

		if (!loadingSound) {
			pause = false;
			previousScene = Application.loadedLevel;
			loadingSound = true;
			StartCoroutine (PlayAudio (audio, "AtributeScreen"));
		}



	}


	public void GoToInventoryScene(AudioSource audio){

		if (!loadingSound) {
			pause = false;
			previousScene = Application.loadedLevel;			
			loadingSound = true;
			StartCoroutine (PlayAudio (audio, "InventoryScene"));

		}



	}

	public void GoToStatisticsScreen(AudioSource audio){
		
		if (!loadingSound) {
			pause = false;
			previousScene = Application.loadedLevel;			
			loadingSound = true;
			StartCoroutine (PlayAudio (audio, "Statistics"));
			
		}
		
	}

	public void GoToStoreScene(AudioSource audio){

		if (!loadingSound) {
			previousScene = Application.loadedLevel;			
			loadingSound = true;
			StartCoroutine (PlayAudio (audio, "Store"));
			
		}


	}

	public void GoToMap(){

		earnedCoins = 0;
		totalEnemiesKilled = totalEnemiesKilled + enemiesKilled;
		enemiesKilled = 0;
		totalEnemies = 0;
		pause = false;
		print ("aqui");
		life = maxLife;

		if(!showTutorial)
			save();
		toLoadScene = "MapScene";


		Application.LoadLevel("loadingScene");
		
		
	}

	public void GoToScore(AudioSource audio){
		if (!loadingSound) {
			pause = false;
			life = maxLife;

			//save ();
			loadingSound = true;
			StartCoroutine (PlayAudio (audio, "ScoreScene"));
		}
	}


	public void GoToMainWithSound(AudioSource audio){
		

		if (!loadingSound ) {
			loadingSound = true;
			StartCoroutine (PlayAudio (audio, "Main"));
		}
		
	}

	public void GoToMapWithSound(AudioSource audio){

		print("ativado");

		if (showTutorial && !showMap){
			//colocando mp-9 e shotgun e 99 aguas no inventory
			inventory[1] = 99;
			inventory[2] = 1;
			inventory[3] = 1;
			abilityIDs[0] = 4;
			abilityIndex = 1;

			bullets[1] = 999; // balas da mp-9
			bullets[2] = 999; //balas de shotgun

			//VAI PARA O INVENTORY, PARA ELE ARRASTAR OS ITENS P/ O SLOT E QND SAIR DO TUTORIAL VAI PARA O MODO HORDA
			showMap = true;
			GoToInventoryScene(audio);

			//GoToMission (audio, 0);
		}

		if (!loadingSound && showMap) {
			earnedCoins = 0;
			totalEnemiesKilled = totalEnemiesKilled + enemiesKilled;
			enemiesKilled = 0;
			totalEnemies = 0;
			pause = false;
			print ("aqui");
			life = maxLife;

			if(!showTutorial)
				save ();

			loadingSound = true;
			StartCoroutine (PlayAudio (audio, "MapScene"));
		}
		
	}

	public void GoToCredits(AudioSource audio){
		if (!loadingSound) {
			loadingSound = true;
			StartCoroutine (PlayAudio (audio, "Credits"));
		}
	}



	public void GoToMissionInventory(AudioSource audio, int missionNumber){
		if (!loadingSound) {
			pause = false;
		
			if(!showTutorial)

				
			loadingSound = true;
				
			switch(missionNumber){
					
				case 0:
					StartCoroutine (PlayAudio (audio, "HordeMode")); 
					break;
					
				case 1:
					StartCoroutine (PlayAudio (audio, "Epilogue")); 
					break;
				case 2:
					StartCoroutine (PlayAudio (audio, "Mission 2"));
					break;
				case 3:
					StartCoroutine (PlayAudio (audio, "Mission 3"));
					break;
				case 4:
					StartCoroutine (PlayAudio (audio, "Mission 4"));
					break;
				case 5:
					StartCoroutine (PlayAudio (audio, "Mission 5"));
					break;
				case 6:
					StartCoroutine (PlayAudio (audio, "Mission 6"));
					break;
				default:
					print("Numero de misssao invalido"); 
					break;
					
			}
				
		
		}
		
		
	}


	public void GoToMission(AudioSource audio, int missionNumber){
		if (!loadingSound) {
			pause = false;
			if (energy > 0) {
				if(!showTutorial)
					energy--;

				loadingSound = true;

				selectedMission = missionNumber;
				goingToMission = true;

				StartCoroutine (PlayAudio (audio, "InventoryScene")); 




			}else{
				//colocar som do neves
			}

		}


	}

	//go to last scene
	public void GoToLastScene(){
		pause = false;

		var behave = GameObject.FindGameObjectWithTag("Behaviour").GetComponent<GameBehavior>();

		if (!showTutorial) {
			behave.save ();
			print ("entrou no saveee");
		}

		behave.toLoadScene = "MapScene";
		Application.LoadLevel("loadingScene");

		//Play();

	}

	

	public void Play(){
		pause = false;


	}

	
	//Inicia audio e troca de cena quando o audio acabar
	 IEnumerator PlayAudio(AudioSource currentAudio,string levelName){
		currentAudio.PlayOneShot (currentAudio.clip);
		print ("comeca a tocar " + currentAudio.clip.length);
		yield return new WaitForSeconds (currentAudio.clip.length);
		//yield return new WaitForSeconds (1);
		loadingSound = false;

		toLoadScene = levelName;

		Application.LoadLevel("loadingScene");
		
	}






	//gettters and setters for atributes


	public int getStrength(){

		return strength;

	}

	public int getAgility(){

		return agility;

	}

	public int getInteligence(){

		return inteligence;

	}
	
	public int getVitality(){


		return vitality;
	}

	public List<ItemData> getInventoryItems(){


		return inventoryItems;

	}

	public void setStrength(int value){

		strength = value;

	}

	public void setAgility(int value){

		agility = value;
	}

	public void setInteligence(int value){

		inteligence = value;

	}

	public void setVitality(int value){


		vitality = value;

	}

	public void setInventoryItems(List<ItemData> items){
		inventoryItems = items;
	}

	//getter for score
	public int getEarnedCoins(){
		return earnedCoins;
	}

	//incrementers

	public void incrementStrength(){

		if(expendPoints > 0){

			strength++;
			expendPoints--;
			CheckAtributesAchievements();
		
		}
	}
	
	public void incrementAgility(){
		
		if(expendPoints > 0){
			
			agility++;
			expendPoints--;
			CheckAtributesAchievements();

			
		}
	
	}
	
	public void incrementInteligence(){
		
		if(expendPoints > 0){
			
			inteligence++;
			expendPoints--;
			CheckAtributesAchievements();

			
		}


	}
	
	public void incrementVitality(){
		

		if(expendPoints > 0){
			
			vitality++;
			expendPoints--;
			CheckAtributesAchievements();

			
		}


	}


	void ReportScoreDetailed (long score, string leaderboardID) {
		Debug.Log ("Reporting score " + score + " on leaderboard " + leaderboardID);
		Social.ReportScore (score, leaderboardID, success => {
			Debug.Log(success ? "Reported score successfully" : "Failed to report score");
		});
	}

	public void CheckWeaponAchievements(){
		
		if(Application.platform == RuntimePlatform.IPhonePlayer){
			Social.localUser.Authenticate( success => {
				if (success){
					if(inventory[2] >= 1)
					{
						ReportAchievement(submachineAchievId,100);
						
					}
					if(inventory[3] >= 1)
					{
						ReportAchievement(shotgunAchievId,100);
						
						
					}
					
					
				}
				else
					Debug.Log ("Failed to authenticate primeiro");
			});	
		}
	}
	
	
	
	
	
	public void CheckAtributesAchievements(){
		
		if(Application.platform == RuntimePlatform.IPhonePlayer){
			Social.localUser.Authenticate( success => {
				if (success){
					if(agility >= 50)
					{
						ReportAchievement(agilityHighId,100);
						
					}
					if(strength >= 50)
					{
						ReportAchievement(strenghtyHighId,100);
						
						
					}
					if(inteligence >= 50)
					{
						
						ReportAchievement(inteligenceHighId,100);
						
					}
					if(vitality >= 50)
					{
						ReportAchievement(vitalityHighId,100);
						
						
					}
					
				}
				else
					Debug.Log ("Failed to authenticate primeiro");
			});	
		}
	}
	
	
	
	
	
	public void CheckAmmoAchievements(){
		
		if(Application.platform == RuntimePlatform.IPhonePlayer){
			Social.localUser.Authenticate( success => {
				if (success){
					
					if(ammoSpent >= 250){
						ReportAchievement(ammo250Id,100);
						
						if(ammoSpent >= 1000){
							ReportAchievement(ammo1000Id,100);
							
							if(ammoSpent >= 10000){
								
								ReportAchievement(ammo10000Id,100);
								
								if(ammoSpent >= 100000){
									ReportAchievement(ammo100000Id,100);
									
								}	
							}
						}
						
					}
				}
				else
					Debug.Log ("Failed to authenticate primeiro");
			});	
		}
	}
	
	public void CheckDeathAchievements(){
		
		if(Application.platform == RuntimePlatform.IPhonePlayer){
			Social.localUser.Authenticate( success => {
				if (success){
					
					if(totalDeaths >= 10){
						ReportAchievement(death10Id,100);
						
						if(totalDeaths >= 100){
							ReportAchievement(death100Id,100);
							
							if(totalDeaths >= 1000){
								
								ReportAchievement(death1000Id,100);
								
								if(totalDeaths >= 10000){
									ReportAchievement(death10000Id,100);
									
								}	
							}
						}
						
					}
				}
				else
					Debug.Log ("Failed to authenticate primeiro");
			});	
		}
	}
	
	
	
	public void CheckCoinsAchievements(){
		
		if(Application.platform == RuntimePlatform.IPhonePlayer){
			Social.localUser.Authenticate( success => {
				if (success){
					
					if(totalCoins >= 500){
						ReportAchievement(coins500Id,100);
						
						if(totalCoins >= 1000){
							ReportAchievement(coins1000Id,100);
							
							if(totalCoins >= 10000){
								
								ReportAchievement(coins10000Id,100);
								
								if(totalCoins >= 100000){
									ReportAchievement(coins100000Id,100);
									
								}	
							}
						}
						
					}
				}
				else
					Debug.Log ("Failed to authenticate primeiro");
			});	
		}
	}
	
	
	
	
	
	public void CheckKnifeAchievements(){
		
		if(Application.platform == RuntimePlatform.IPhonePlayer){
			Social.localUser.Authenticate( success => {
				if (success){
					
					if(knifeKills >= 100){
						ReportAchievement(knifel100Id,100);
						
						if(knifeKills >= 500){
							ReportAchievement(knifel500Id,100);
							
							if(knifeKills >= 2000){
								
								ReportAchievement(knifel2000Id,100);
								
								if(knifeKills >= 10000){
									ReportAchievement(knifel10000Id,100);
									
								}	
							}
						}
						
					}
				}
				else
					Debug.Log ("Failed to authenticate primeiro");
			});	
		}
	}
	
	
	
	
	public void CheckHordeAchievements(int wave){
		
		if(Application.platform == RuntimePlatform.IPhonePlayer){
			Social.localUser.Authenticate( success => {
				if (success){
					
					if(wave >= 10){
						ReportAchievement(horde10Id,100);
						
						if(wave >= 25){
							ReportAchievement(horde25Id,100);
							
							if(wave >= 50){
								
								ReportAchievement(horde50Id,100);
								
								if(wave >= 100){
									ReportAchievement(horde100Id,100);
									
								}	
							}
						}
						
					}
				}
				else
					Debug.Log ("Failed to authenticate primeiro");
			});	
		}
	}





	public void save(){

		BinaryFormatter bf = new BinaryFormatter();
		FileStream file = File.Create(Application.persistentDataPath + "/BadBarryData.dat");
		Data data = new Data();


		data.levelingUp = levelingUp;
		data.levelsUp = levelsUp;
		data.pause = pause;
		data.teste = teste;
		data.experience = experience;
		data.neededExperience = neededExperience; 
		data.life = life;
		data.maxLife = maxLife;
		data.expendPoints = expendPoints;
		data.strength = strength;
		data.agility = agility;
		data.inteligence = inteligence;
		data.vitality = vitality;
		data.bullets = bullets;
		data.energy = energy;
		data.timer = timer;
		data.lastDateTime = lastDateTime;
		data.inventory = inventory;
		data.abilityIndex = abilityIndex;
		data.abilityIDs = abilityIDs;
		data.coins = coins;

		data.totalCoins = totalCoins;
		data.maxHordeKills = maxHordeKills;
		data.enemiesKilled = enemiesKilled;
		data.ammoSpent = ammoSpent;
		data.totalExperience = totalExperience;
		data.knifeKills = knifeKills;
		data.totalEnemiesKilled = totalEnemiesKilled;


		data.showTutorial = showTutorial;
		data.showMap = showMap;
		data.showAttributes = showAttributes;
		data.showStore = showStore;
		data.currentMission = currentMission;


		bf.Serialize(file,data);
		file.Close();
		print("save");

	}

	public void load(){

//		File.Delete (Application.persistentDataPath + "/BadBarryData.dat");

		if(File.Exists(Application.persistentDataPath + "/BadBarryData.dat")){
			print("load");
			BinaryFormatter bf = new BinaryFormatter();
			FileStream file = File.Open(Application.persistentDataPath + "/BadBarryData.dat",FileMode.Open);
			Data data = (Data)bf.Deserialize(file);
			file.Close();

			levelingUp = data.levelingUp;
			levelsUp = data.levelsUp;
			pause = data.pause;
			teste = data.teste;
			experience = data.experience;
			neededExperience = data.neededExperience; 
			life = data.life;
			maxLife = data.maxLife;
			expendPoints = data.expendPoints;
			strength = data.strength;
			agility = data.agility;
			inteligence = data.inteligence;
			vitality = data.vitality;
			bullets = data.bullets;
			energy = data.energy;
			timer = data.timer;
			lastDateTime = data.lastDateTime;

			inventory = data.inventory;
			abilityIDs = data.abilityIDs;
			abilityIndex = data.abilityIndex;

			coins = data.coins;


			totalCoins = data.totalCoins;
			maxHordeKills = data.maxHordeKills;
			enemiesKilled = data.enemiesKilled;
			ammoSpent = data.ammoSpent;
			totalExperience = data.totalExperience;
			knifeKills = data.knifeKills;
			totalEnemiesKilled = data.totalEnemiesKilled;

			showTutorial = data.showTutorial;
			showMap = data.showMap;
			showAttributes = data.showAttributes;
			showStore = data.showStore;
			currentMission = data.currentMission;


		}




	}



	
}


[Serializable]
class Data
{

	public int[] inventory;

	public bool levelingUp;
	public int levelsUp;
	public bool pause;
	public bool teste;
	public float experience;
	public float neededExperience; 
	public int life;
	public int energy;
	public int maxLife;
	
	
	//attributes points
	public int expendPoints;

	public int strength;
	public int agility;
	public int inteligence;
	public int vitality;
		
	public int[] bullets;

	public float timer;

	public DateTime lastDateTime;

	public int coins;

	//statistics
	public int totalCoins;
	public int maxHordeKills;
	public int enemiesKilled;
	public int ammoSpent;
	public float totalExperience;
	public int knifeKills;
	public int[] abilityIDs;

	public int abilityIndex;

	//tutorial
	public int totalEnemiesKilled;

	public bool showTutorial;
	public bool showMap;
	public bool showAttributes;
	public bool showStore;
	public int currentMission;






}









