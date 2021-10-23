using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyManager : MonoBehaviour
{
    public Transform[] m_SpawnPoints;
    public GameObject m_EnemyPrefeb;
    // Start is called before the first frame update
    void Start()
    {
        SpawnNewEnemy();

    }

    // void onEnable(){
    //     EnemyControl.onEnemyKilled += SpawnNewEnemy;
    // }


    void SpawnNewEnemy(){
        
        for(int i = 0; i< m_SpawnPoints.Length -1; i++){
            Instantiate(m_EnemyPrefeb,m_SpawnPoints[i].transform.position,Quaternion.identity);
        }
    }
}
