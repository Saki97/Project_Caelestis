using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class VolumeController : MonoBehaviour
{
    public Slider volumeSlider;

    public void changeVolume(){
        AudioListener.volume = volumeSlider.value;
    }
    void Start()
    {
        if(!PlayerPrefs.HasKey("musicVolume")){
            PlayerPrefs.SetFloat("musicVolume", 1);
            Load();
        }else{
            Load();
        }
    }
    private void Load(){
        volumeSlider.value = PlayerPrefs.GetFloat("musicVolume");
        Save();
    }

    private void Save(){
        PlayerPrefs.SetFloat("musicVolume", volumeSlider.value);
    }
}
