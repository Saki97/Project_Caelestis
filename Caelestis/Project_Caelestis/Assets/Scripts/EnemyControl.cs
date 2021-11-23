using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class EnemyControl : MonoBehaviour
{
    public int damage;


    private Vector2 movement;
    private Transform player;
    private Rigidbody2D rb;
    private BoxCollider2D col;
    
    public float moveSpeed = 15.0f;
    public float lineOfSite;
 

    private PlayerController playerController;
    private PlayerHealth playerHealth;
    


    // public delegate void EnemyKilled();
    // public static event EnemyKilled onEnemyKilled;



    // Start is called before the first frame update
    void Start()
    {
        rb = this.GetComponent<Rigidbody2D>();
        col = GetComponent<BoxCollider2D>();
        player = GameObject.Find("Player").transform;
        playerHealth = GameObject.Find("Player").GetComponent<PlayerHealth>();
        playerController  = GameObject.Find("Player").GetComponent<PlayerController>();
        
    }

    // Update is called once per frame
    void Update()
    {
        if(player != null) 
        {
            float distanceFromPlayer = Vector2.Distance(player.position, transform.position);
            if (distanceFromPlayer < lineOfSite && MusicHandler._instance.CheckInputTiming())
            {
                transform.position = Vector2.MoveTowards(this.transform.position, player.position, moveSpeed * Time.deltaTime);
                // Vector3 direction = player.transform.position - transform.position;
                // direction.Normalize();
                // movement = direction;
            }
        }
    }

    // private void FixedUpdate(){
    //     moveCharacter(movement);
    // }

    // void moveCharacter(Vector2 direction){
    //     rb.MovePosition((Vector2)transform.position + (direction * moveSpeed * Time.deltaTime));
    // }

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
        // if( (collision.gameObject.CompareTag("Player") && collision.GetType().ToString() == "UnityEngine.PolygonCollider2D") || 
        //     (collision.gameObject.CompareTag("Player") && collision.GetType().ToString() == "UnityEngine.BoxCollider2D")){
        //     //怪兽在player左方
        //     if(transform.position.x < player.position.x){
        //         Vector3 target_position = new Vector3(this.transform.position.x - 5, this.transform.position.y);
        //         transform.position = Vector2.MoveTowards(this.transform.position, target_position, moveSpeed * Time.deltaTime);
        //     }
        //     //怪兽在player右方
        //     else{
        //         Vector3 target_position = new Vector3(this.transform.position.x + 5, this.transform.position.y);
        //         transform.position = Vector2.MoveTowards(this.transform.position, target_position, moveSpeed * Time.deltaTime);
        //     }
        // }
    }

 
    private void OnDrawGizmosSelected(){
        Gizmos.color = Color.green;
        Gizmos.DrawWireSphere(transform.position,lineOfSite);

    }

    public void RestartScene()
     {
        Scene thisScene = SceneManager.GetActiveScene();
        SceneManager.LoadScene(thisScene.name);
     }
    
    public void killMonster()
    {
        Destroy(gameObject);
    }
}
