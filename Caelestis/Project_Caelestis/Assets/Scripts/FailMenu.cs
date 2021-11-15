using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
public class FailMenu : MonoBehaviour
{
    public void replay(){
        SceneManager.LoadScene(SceneManager.GetActiveScene().name);
    }

    public void gotoMenu(){
        SceneManager.LoadScene("EntryMenu");
    }
}
