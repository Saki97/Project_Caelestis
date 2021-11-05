using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HideSpikeBox : MonoBehaviour
{
    public int damage;
    public float destoryTime;
    private PlayerHealth playerHealth;
    // Start is called before the first frame update
    void Start()
    {
        playerHealth = GameObject.Find("Player").GetComponent<PlayerHealth>();
        Destroy(gameObject,destoryTime);   
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        // if(collision.gameObject.CompareTag("Player") && collision.GetType().ToString() == "UnityEngine.CapsuleCollider2D")
        if(collision.gameObject.CompareTag("Player") && collision.GetType().ToString() == "UnityEngine.CapsuleCollider2D")
        {
            if(playerHealth != null)
            {
                playerHealth.GetDamage(damage);
                DataRecorder.Instance.SpikeDmgCounting(1);
                Debug.Log("Player get hurt! Player HP: " + playerHealth.health + " !");
            }
        }
    }
}
