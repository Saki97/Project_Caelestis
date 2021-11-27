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
        MusicHandler.OnBeatEvt += BeatAction;
    }

    private void OnDisable()
    {
        MusicHandler.OnBeatEvt -= BeatAction;

    }

    // Update is called once per frame
    void Update()
    {
        if (!lockedOn)
        {
            KeepAim();
            MoveTo(PickPos());
        }
        else if (lockedOn)
        {

        }

        
        //gameObject.transform.LookAt(playerPos, Vector3.back);
    }

    void LockOn()
    {
        
        lockedOn = !lockedOn;
    }

    void BeatAction()
    {
        if (!lockedOn) Fire();
        else if (lockedOn) LockOn();
    }
    void KeepAim()
    {
        Vector3 dir = playerPos.position - transform.position;
        float angle = Mathf.Atan2(dir.y, dir.x) * Mathf.Rad2Deg;
        transform.rotation = Quaternion.AngleAxis(angle, Vector3.forward);
    }

    Vector3 PickPos()
    {
        Vector3 TargetPos = playerPos.position;
        TargetPos.x += Random.Range(10f, 20f);
        TargetPos.y += Random.Range(10f, 20f);
        return TargetPos;
    }
    void MoveTo(Vector3 TargetPos)
    {
        
        
    }

    void Fire()
    {
        //Debug.Log("Fire");
    }
}
