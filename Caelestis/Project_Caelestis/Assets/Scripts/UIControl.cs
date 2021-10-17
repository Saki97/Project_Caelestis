using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using UnityEngine.InputSystem;
using UnityEngine.UI;

using UnityEngine.SceneManagement;
public class UIControl : MonoBehaviour
{
    private PlayerControlsNewVersion controls;
    private bool mute;
    private bool paused;


    public Sprite muteImage;
    public Sprite unMuteImage;
    public Sprite pauseImage;
    public Sprite continueImage;

    public Button pauseButton;
    public Button muteButton;

    public GameObject pauseMenu;
    private void Awake()
    {
        controls = new PlayerControlsNewVersion();
        mute = false;
        paused = false;
   
    }

    private void OnEnable()
    {
        controls.Enable();
    }
    private void OnDisable()
    {
        controls.Disable();
    }
    void Start()
    {
        
    }

    void Update()
    {
        var keyboard = Keyboard.current;
        if(keyboard.pKey.wasPressedThisFrame){
            togglePause();
        }
        if(keyboard.mKey.wasPressedThisFrame){
            toggleMute();
        }
    }

    public void togglePause(){
        AudioSource[] sources = FindObjectsOfType(typeof(AudioSource)) as AudioSource[];
        paused = !paused;
        if(paused){
            pauseButton.image.sprite = pauseImage;
            pauseMenu.SetActive(true);
            Time.timeScale = 0;
            for( int index = 0 ; index < sources.Length ; ++index ){
                sources[index].Pause() ;
            }
        }else{
            pauseButton.image.sprite = continueImage;
            pauseMenu.SetActive(false);
            Time.timeScale = 1;
            for( int index = 0 ; index < sources.Length ; ++index ){
                sources[index].Play() ;
            }
        }
    }

    void toggleMute(){
        mute = !mute;
        
        if(mute){
            muteButton.image.sprite = muteImage;
        }else{
            muteButton.image.sprite = unMuteImage;
        }
        AudioSource[] sources = FindObjectsOfType(typeof(AudioSource)) as AudioSource[];
        for( int index = 0 ; index < sources.Length ; ++index )
        {
            sources[index].mute = mute ;
        }

    }

    public void quitGame(){
        Debug.Log("Quit game!");
        Application.Quit();
    }

    public void gotoMenu(){
        Time.timeScale = 1;
        SceneManager.LoadScene("EntryMenu");
    }
}
