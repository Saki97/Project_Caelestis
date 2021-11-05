using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HideSpike : MonoBehaviour
{
    public GameObject hideSpikeBox;
    private Animator anim;
    public int beat;
    private int count;
    public float time;
    // Start is called before the first frame update
    void Start()
    {
        anim = GetComponent<Animator>();
        count = 0;
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void OnEnable() {
        MusicHandler.OnBeatEvt += SpikeAttack;
    }

    void OnDisable() {
        MusicHandler.OnBeatEvt -= SpikeAttack;
    }

    // void OnTriggerEnter2D(Collider2D other)
    // {
    //     if (other.CompareTag("Player") && other.GetType().ToString() == "UnityEngine.CapsuleCollider2D")
    //     {
    //         StartCoroutine(SpikeAttack());
    //     }
    // }

    void SpikeAttack()
    {
        if (count < beat)
        {
            count++;
        }
        else 
        {
            Debug.Log("Attack!");
            anim.SetTrigger("Attack");
            Invoke("InitHideSpikeBox", time);
            count = 0;
        }
    }

    void InitHideSpikeBox()
    {
        Instantiate(hideSpikeBox, transform.position, Quaternion.identity);
    }

}
