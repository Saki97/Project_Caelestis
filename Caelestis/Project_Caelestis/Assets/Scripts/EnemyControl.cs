using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class EnemyControl : MonoBehaviour
{
    public int damage;
    private Vector3 target_position;
    public float smoothTime = 0.3F;
    private Vector3 velocity = Vector3.zero;
    private PlayerController playerController;
    private PlayerHealth playerHealth;

    private BoxCollider2D col;
    // Start is called before the first frame update
    void Start()
    {
        col = GetComponent<BoxCollider2D>();
        playerHealth = GameObject.FindGameObjectWithTag("Player").GetComponent<PlayerHealth>();
        playerController  = GameObject.FindGameObjectWithTag("Player").GetComponent<PlayerController>();
    }

    // Update is called once per frame
    void Update()
    {
        //Player未被击中
        Attack();
        if(GameObject.FindGameObjectWithTag("Player") == null){
            Application.Quit();
        }
        
        
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if(collision.gameObject.CompareTag("Player") && collision.GetType().ToString() == "UnityEngine.CapsuleCollider2D")
        {
            if(playerHealth != null && !playerController.isDashing)
            {
                playerHealth.GetDamage(damage);
                Debug.Log("Player get hurt! Player HP: " + playerHealth.health + " !");
            }
        }
    }

    private void Attack(){
        // 1/2拍锁定player位置并存储
        if(GameObject.FindGameObjectWithTag("Player") != null && MusicHandler.Instance.CheckInputTiming() != true){
            target_position = GameObject.FindGameObjectWithTag("Player").transform.position;
            
        }
        //正拍monster冲向1/2拍时储存的位置
        if(MusicHandler.Instance.CheckInputTiming()){
            transform.position = Vector3.SmoothDamp(transform.position, target_position, ref velocity, smoothTime);
        }
       
    }

    public void RestartScene()
     {
        Scene thisScene = SceneManager.GetActiveScene();
        SceneManager.LoadScene(thisScene.name);
     }

}
