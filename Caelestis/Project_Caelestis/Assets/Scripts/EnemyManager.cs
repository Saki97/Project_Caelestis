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

    void onEnable(){
        EnemyControl.onEnemyKilled += SpawnNewEnemy;
    }


    void SpawnNewEnemy(){
        Instantiate(m_EnemyPrefeb,m_SpawnPoints[0].transform.position,Quaternion.identity);

    }
}
