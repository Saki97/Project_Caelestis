using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
public class MainMenu : MonoBehaviour
{

    public void gotoLevel(int i){
        SceneManager.LoadScene("level" + i);
    }

    public void QuitGame(){
        Debug.Log("Quit game!");
        Application.Quit();
    }

    public void goShop(){
        SceneManager.LoadScene("Shop");
    }

    public void gotoMain(){
        SceneManager.LoadScene("EntryMenu");
    }
}
