using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ResetZone : MonoBehaviour
{
    private void OnTriggerEnter2D(Collider2D collision)
    {
        DataRecorder.Instance.FallCounting();
      
        SceneManager.LoadScene(SceneManager.GetActiveScene().name);
    }
}
