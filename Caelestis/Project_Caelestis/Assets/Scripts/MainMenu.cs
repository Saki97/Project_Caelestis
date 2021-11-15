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

    private void Awake() {
        if(!PlayerPrefs.HasKey("show_button")){ 
            PlayerPrefs.SetInt("show_button", 0);
            showButtons.isOn = false;
        }else{
            showButtons.isOn = PlayerPrefs.GetInt("show_button") == 1;
        }
    }
    public void toggleButtons(){
        if(showButtons.isOn){
            PlayerPrefs.SetInt("show_button", 1);
            showButtons.isOn = true;
        }else{
            PlayerPrefs.SetInt("show_button", 0);
            showButtons.isOn = false;
        }
    }
}
