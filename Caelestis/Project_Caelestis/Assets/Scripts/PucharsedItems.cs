using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PucharsedItems
{
    private string[] itemNames = {"lifes", "bombs", "crits"};
    private int[] itemNums = {0, 0, 0};

    public PucharsedItems()
    {
        for(int i = 0; i < 3; i++){
            if(PlayerPrefs.HasKey(itemNames[i])){
                itemNums[i]  = PlayerPrefs.GetInt(itemNames[i]);
            }else{
                PlayerPrefs.SetInt(itemNames[i], 0);
                itemNums[i] = 0;
            }
        }
    }

    public int useItem(int i){
        if(itemNums[i] > 0){
            itemNums[i] --;
            PlayerPrefs.SetInt(itemNames[i], itemNums[i]); 
            return itemNums[i];
        }
        return -1;
    }

    public int getNums(int i){
        return itemNums[i];
    }

}
