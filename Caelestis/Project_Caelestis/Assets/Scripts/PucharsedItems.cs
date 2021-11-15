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

    public int addLife(){
        if(itemNums[0] > 0){
            itemNums[0] --;
            PlayerPrefs.SetInt("lifes", itemNums[0]); 
            return itemNums[0];
        }
        return -1;
    }

    public int getNums(int i){
        return itemNums[i];
    }

}
