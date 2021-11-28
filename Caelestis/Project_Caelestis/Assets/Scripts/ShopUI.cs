using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
public class ShopUI : MonoBehaviour
{
    // Start is called before the first frame update

    int coins;
    int currentPurchase;
    string[] itemNames = {"lifes", "bombs", "crits"};
    int[] items = {0, 0, 0};
    public int[] prices = {10, 30, 20};

    public GameObject warningMenu;
    public GameObject confirmMenu;

    public Text coinsQuant;
    public Text confirm;
    public Text[] itemsQuant = {null, null, null};
    public Text[] pricesQuant = {null, null, null};
    string[] confirmText = {"Extra Life", "Bomb", "Critical Attack"};

    public void addCoins(){
        coins += 2000;
        PlayerPrefs.SetInt("tot_coins", coins);
        coinsQuant.text = coins.ToString();
        for(int i = 0; i < 3; i++){
            currentPurchase = i;
            for(int j = 0; j < 100; j++){
                confirmPurchase();
            }
        }
    }

    void Start()
    {
        if(!PlayerPrefs.HasKey("tot_coins")){
            coins = 100;
            PlayerPrefs.SetInt("tot_coins", coins);
        }else{
            coins = PlayerPrefs.GetInt("tot_coins");
        }
        coinsQuant.text = coins.ToString();

        for(int i = 0; i < 3; i++){
            initKeys(i);
            pricesQuant[i].text = prices[i].ToString();
        }
    }

    void initKeys(int i){
        if(!PlayerPrefs.HasKey(itemNames[i])){
            items[i] = 0;
            PlayerPrefs.SetInt(itemNames[i], 0);
        }else{
            items[i] = PlayerPrefs.GetInt(itemNames[i]);
        }
        itemsQuant[i].text = items[i].ToString();
    }
    
    public void buyItem(int i){
        if(coins >= prices[i]){
            currentPurchase = i;
            confirm.text = "Click YES to confirm your purchase of " + confirmText[i];
            confirmMenu.SetActive(true);
        }else{
            warningMenu.SetActive(true);
        }
    }

    public void returnToMenu(){
        SceneManager.LoadScene("EntryMenu");
    }

    public void confirmPurchase(){
        coins -= prices[currentPurchase];
        items[currentPurchase] ++;
        PlayerPrefs.SetInt(itemNames[currentPurchase], items[currentPurchase]);
        PlayerPrefs.SetInt("tot_coins", coins);
        coinsQuant.text = coins.ToString();
        itemsQuant[currentPurchase].text = items[currentPurchase].ToString();
        confirmMenu.SetActive(false);
    }

}
