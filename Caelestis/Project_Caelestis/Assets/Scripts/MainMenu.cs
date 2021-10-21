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
    public void Tutorial(){
        SceneManager.LoadScene("Study_Scene");
    }

    public void level1(){
        SceneManager.LoadScene("Scene0");
    }

    public void QuitGame(){
        Debug.Log("Quit game!");
        Application.Quit();
    }

}
