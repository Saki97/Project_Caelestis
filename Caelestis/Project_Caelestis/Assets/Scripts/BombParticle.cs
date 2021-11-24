using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BombParticle : MonoBehaviour
{
    private BoxCollider2D col;

    void Start()
    {
        col = GetComponent<BoxCollider2D>();
    }

    private void OnParticleCollision(GameObject other) {
        if(other.gameObject.CompareTag("enemy")){
            Destroy(other.gameObject);
        }
    }
}