using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
public class MainMenu : MonoBehaviour
{
    public Toggle showButtons;
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

    private void Start() {
        if(!PlayerPrefs.HasKey("show_button")){ 
            PlayerPrefs.SetInt("show_button", 1);
            if(showButtons){
                showButtons.SetIsOnWithoutNotify(true);
            }
        }else{
            if(showButtons){
                showButtons.SetIsOnWithoutNotify(PlayerPrefs.GetInt("show_button") == 1);
            }
        }
    }
    public void toggleButtons(){
        if(PlayerPrefs.GetInt("show_button") == 0){
            PlayerPrefs.SetInt("show_button", 1);
            showButtons.SetIsOnWithoutNotify(true);
        }else{
            PlayerPrefs.SetInt("show_button", 0);
            showButtons.SetIsOnWithoutNotify(false);
        }
    }
}
