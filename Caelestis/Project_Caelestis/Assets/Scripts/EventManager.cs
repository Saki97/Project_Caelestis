using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EventManager : MonoBehaviour
{
    public static EventManager _instance;


    public delegate void LevelClear();
    public static event LevelClear OnLevelClear;

    private void Awake()
    {
        _instance = this;
    }

    public static EventManager Instance
    {
        get
        {
            return _instance;
        }
    }
    
    
}
