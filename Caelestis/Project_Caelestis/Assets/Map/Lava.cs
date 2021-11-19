using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Lava : MonoBehaviour
{
    public int damage;
    private BoxCollider2D col;
    private PlayerHealth playerHealth;
    // Start is called before the first frame update
    void Start()
    {
        col = GetComponent<BoxCollider2D>();
        playerHealth = GameObject.Find("Player").GetComponent<PlayerHealth>();
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        // if(collision.gameObject.CompareTag("Player") && collision.GetType().ToString() == "UnityEngine.CapsuleCollider2D")
        if(collision.gameObject.CompareTag("Player") && collision.GetType().ToString() == "UnityEngine.CapsuleCollider2D")
        {

            if(playerHealth != null)
            {
                
                playerHealth.GetDamage(damage);
                Debug.Log("Player get hurt! Player HP: " + playerHealth.health + " !");
            }
        }
    }
}
