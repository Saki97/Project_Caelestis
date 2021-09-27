using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraFollow : MonoBehaviour
{
    private Transform playerTransForm;
    public float cameraDistance = 30.0f;
    // Start is called before the first frame update

    void Awake() {
        GetComponent<UnityEngine.Camera>().orthographicSize = ((Screen.height / 2) / cameraDistance);
    }

    void Start()
    {
        playerTransForm = GameObject.FindGameObjectWithTag("Player").transform;
        

    }

    void LateUpdate()
    {   
        if (GameObject.Find("Player") != null)
        {
        //store cur camera position in temp
        Vector3 temp = transform.position;
        //set camera's position x, y to player's x, y
        temp.x = playerTransForm.position.x;
        temp.y = playerTransForm.position.y;
        //set back camera's temp position to camera's curr position
        transform.position = temp;
        }
    }
}
