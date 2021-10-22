using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ShopManager : MonoBehaviour
{
    public int coins = 100;
    public Text coinsTxt;
    public int item_cnt = 4;
    public int[,] shopItems = new int[4, 3];
    //{id, price, quatity}
    public string[,] item_description= new string[4, 2];

    void Start()
    {
        initShopItems();
    }

    // Update is called once per frame
    void Update()
    {
    }

    void initShopItems(){
        
        //init coins
        if(!PlayerPrefs.HasKey("coins")){
            PlayerPrefs.SetInt("coins", coins);
        }else{
            coins = PlayerPrefs.GetInt("coins");
        }

         // initialize id
        for(int i = 0; i < item_cnt; i++){
            shopItems[i, 0] = i;
        }

        //initialize price
        shopItems[0, 1] = 30;
        shopItems[1, 1] = 50;
        shopItems[2, 1] = 20;
        shopItems[3, 1] = 80;

        //initialize item name;
        item_description[0, 0] = "Extra Life";
        item_description[1, 0] = "Critical Strike";
        item_description[2, 0] = "Free Dashing";
        item_description[3, 0] = "Bomb";

        //initialize item description
        item_description[0, 1] = "Get an extra life";
        item_description[1, 1] = "Double damage";
        item_description[2, 1] = "Dashing for 2s";
        item_description[3, 1] = "Eliminate all the monsters on the screen";

        //initialize item quantity
        for(int i = 0; i < item_cnt; i++){
            string item_name = item_description[i, 0];
            shopItems[i, 2] = getItemQuant(item_name);
        }
    }

    //return the number of items the player currently has
    public int getItemQuant(string item_name){
        if(!PlayerPrefs.HasKey(item_name)){
            PlayerPrefs.SetInt(item_name, 0);
            return 0;
        }else{
            return PlayerPrefs.GetInt(item_name);
        }
    }

    public void addCoins(){
        coins ++;
        PlayerPrefs.SetInt("coins", coins);
    }

    public void spendCoins(int n){
        coins -= n;
        PlayerPrefs.SetInt("coins", coins);
    }

    public void increaseItemQuant(int id){
        shopItems[id, 2]++;
        PlayerPrefs.SetInt(item_description[id, 0], shopItems[id, 2]);
    }
    public void Buy(int id){
        int price = shopItems[id, 1];
        int currQuan = shopItems[id, 2];

        if(coins >= price){
            spendCoins(price);
            increaseItemQuant(id);
            coinsTxt.text = coins.ToString();
        }else{
            Debug.Log("Not Enough Coins !");
        }
    }

}
