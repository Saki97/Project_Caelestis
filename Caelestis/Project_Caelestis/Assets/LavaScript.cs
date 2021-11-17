using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LavaScript : MonoBehaviour
{
    // Start is called before the first frame update
    private ParticleSystem ps;
    void Start()
    {
        ps = GetComponent<ParticleSystem>();
        ps.Play();
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
