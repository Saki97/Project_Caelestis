using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LavaParticle : MonoBehaviour
{
    // Start is called before the first frame update
    private ParticleSystem ps;
    private int count;
    public int beat;

    //damage
    public int damage;
    private BoxCollider2D col;
    private PlayerHealth playerHealth;
    void Start()
    {
        ps = GetComponent<ParticleSystem>();
        ps.Stop();
        count = 0;

        col = GetComponent<BoxCollider2D>();
        playerHealth = GameObject.Find("Player").GetComponent<PlayerHealth>();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void OnEnable() {
        MusicHandler.OnBeatEvt += Spout;
    }

    void OnDisable() {
        MusicHandler.OnBeatEvt -= Spout;
    }

    void Spout() {
        if (count < beat) {
            ps.Stop();
            count++;
        }
        else {
            ps.Play();
            count = 0;
        }
    }


    private void OnParticleCollision(GameObject collision)
    {
        Debug.Log("Player get hurt! Player HP: " + playerHealth.health + " !");
        if(collision.gameObject.CompareTag("Player"))
        {
            if(playerHealth != null)
            {
                
                playerHealth.GetDamage(damage);
                Debug.Log("Player get hurt! Player HP: " + playerHealth.health + " !");
            }
        }
    }
}
