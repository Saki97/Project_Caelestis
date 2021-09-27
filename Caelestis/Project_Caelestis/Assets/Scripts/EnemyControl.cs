using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyControl : MonoBehaviour
{
    private Vector3 target_position;
    private float smoothTime = 0.3F;
    private Vector3 velocity = Vector3.zero;

    private BoxCollider2D col;
    // Start is called before the first frame update
    void Start()
    {
        col = GetComponent<BoxCollider2D>();
    }

    // Update is called once per frame
    void Update()
    {
        Attack();
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if(collision.gameObject.CompareTag("Player") && collision.GetType().ToString() == "UnityEngine.CapsuleCollider2D")
        {
            Destroy(collision.gameObject);
        }
    }

    private void Attack(){
        // 1/2拍锁定player位置并存储
        if(MusicHandler.Instance.CheckInputTiming() != true){
            target_position = GameObject.FindGameObjectWithTag("Player").transform.position;
            
        }
        //正拍monster冲向1/2拍时储存的位置
        if(MusicHandler.Instance.CheckInputTiming()){
            transform.position = Vector3.SmoothDamp(transform.position, target_position, ref velocity, smoothTime);
        }
    }
}
