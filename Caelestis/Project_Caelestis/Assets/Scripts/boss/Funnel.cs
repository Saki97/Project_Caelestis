using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Funnel : MonoBehaviour
{
    Transform playerPos;

    private bool lockedOn;
    // Start is called before the first frame update
    void Start()
    {
        lockedOn = false;
        playerPos = GameObject.Find("Player").transform; 
    }

    private void OnEnable()
    {
        //MusicHandler.OnBeatEvt += ;
    }

    // Update is called once per frame
    void Update()
    {
        if (!lockedOn)
        {
            Vector3 dir = playerPos.position - transform.position;
            float angle = Mathf.Atan2(dir.y, dir.x) * Mathf.Rad2Deg;
            transform.rotation = Quaternion.AngleAxis(angle, Vector3.forward);
        }

        
        //gameObject.transform.LookAt(playerPos, Vector3.back);
    }

    void LockOn()
    {
        
        lockedOn = !lockedOn;
    }

}
