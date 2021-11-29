using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Funnel : MonoBehaviour
{
    Transform playerPos;
    Transform startPos;
    Vector3 targetPos;
    private bool lockedOn;
    private float t;

    [SerializeField] GameObject beam;
    // Start is called before the first frame update
    void Awake()
    {
        lockedOn = false;
        t = 0f;
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
        //Debug.Log(lockedOn);
        if (!lockedOn)
        {
            
            KeepAim();
            MoveTo(targetPos);
        }
        else if (lockedOn)
        {

        }

        
        //gameObject.transform.LookAt(playerPos, Vector3.back);
    }

    public void LockOn()
    {
        
        lockedOn = !lockedOn;
    }

    void BeatAction()
    {
        if (lockedOn)
        {
            
            targetPos = PickPos();
            LockOn();
        }
        else if (!lockedOn)
        {
            Invoke("Fire", 0.3f);
            //beam.SetActive(true);
            LockOn();
        }
    }
    void KeepAim()
    {
        Vector3 dir = playerPos.position - transform.position;
        float angle = Mathf.Atan2(dir.y, dir.x) * Mathf.Rad2Deg;
        transform.rotation = Quaternion.AngleAxis(angle, Vector3.forward);
    }

    Vector3 PickPos()
    {
        startPos = this.transform;
        Vector3 TargetPos = playerPos.position;
        if(Random.Range(-1f,1f) > 0)
            TargetPos.x += Random.Range(8f, 12f);
        else TargetPos.x -= Random.Range(8f, 12f);
        if (Random.Range(-1f,1f) > 0)
            TargetPos.y += Random.Range(5f, 10f);
        else TargetPos.y -= Random.Range(5f, 10f);
        return TargetPos;
    }
    void MoveTo(Vector3 TargetPos)
    {
        t = 1f - MusicHandler.Instance.inputTimer;

        Vector3 p0 = startPos.position;
        Vector3 p1 = p0 + startPos.forward;
        Vector3 p3 = targetPos;

        Vector3 p2 = p1 + new Vector3(2,1,0); 
                                                                                                                    

        gameObject.transform.position = 
        Mathf.Pow(1f - t, 3f) * p0 + 3f * Mathf.Pow(1f - t, 2f) * t * p1 + 3f * (1f - t) * Mathf.Pow(t, 2f) * p2 + Mathf.Pow(t, 3f) * p3;
        gameObject.transform.position = new Vector3(gameObject.transform.position.x, gameObject.transform.position.y,0f);
        //this.transform.position = TargetPos;
        //Debug.Log("move to" + targetPos);

    }

    void Fire()
    {
        //Debug.Log("Fire");
        beam.SetActive(true);
        StartCoroutine(TurnOffBeam());
    }

    IEnumerator TurnOffBeam()
    {
        yield return new WaitForSeconds(0.15f);

        beam.SetActive(false);
    }
}
