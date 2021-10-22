using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class EnemyControl : MonoBehaviour
{
    public int damage;
    // private Vector3 target_position;

    private Vector2 movement;
    public Transform player;
    private Rigidbody2D rb;
    public float moveSpeed = 15.0f;
 

    private PlayerController playerController;
    private PlayerHealth playerHealth;
    private BoxCollider2D col;


    public delegate void EnemyKilled();
    public static event EnemyKilled onEnemyKilled;



    // Start is called before the first frame update
    void Start()
    {
        rb = this.GetComponent<Rigidbody2D>();
        col = GetComponent<BoxCollider2D>();
        playerHealth = GameObject.Find("Player").GetComponent<PlayerHealth>();
        playerController  = GameObject.Find("Player").GetComponent<PlayerController>();
    }

    // Update is called once per frame
    void Update()
    {

        if(GameObject.Find("Player") == null){
            Application.Quit();
        }
        Vector3 direction = player.position - transform.position;
        direction.Normalize();
        movement = direction;
        
        
    }

    private void FixedUpdate(){
        moveCharacter(movement);
    }

    void moveCharacter(Vector2 direction){
        rb.MovePosition((Vector2)transform.position + (direction * moveSpeed * Time.deltaTime));
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if(collision.gameObject.CompareTag("Player") && collision.GetType().ToString() == "UnityEngine.CapsuleCollider2D")
        {
            if(playerHealth != null && !playerController.isDashing)
            {
                playerHealth.GetDamage(damage);
                Debug.Log("Player get hurt by Monster_Tomato! Player HP: " + playerHealth.health + " !");
            }
        }
    }

 
    // private void Attack(){
    //     // 1/2拍锁定player位置并存储
    //     if(GameObject.Find("Player") != null && MusicHandler.Instance.CheckInputTiming() != true){
    //         target_position = GameObject.Find("Player").transform.position;
            
    //     }
    //     //正拍monster冲向1/2拍时储存的位置
    //     if(MusicHandler.Instance.CheckInputTiming()){
    //         transform.position = Vector3.SmoothDamp(transform.position, target_position, ref velocity, smoothTime);
    //     }
       
    // }

    public void RestartScene()
     {
        Scene thisScene = SceneManager.GetActiveScene();
        SceneManager.LoadScene(thisScene.name);
     }

}
