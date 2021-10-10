using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
public class DataRecorder : MonoBehaviour
{
    /// <summary>
    /// created by Yue Yu
    /// </summary>

    string filename = "";

    float levelTimer;
    List<float> passTime = new List<float>();
    // Start is called before the first frame update
    void Start()
    {
        filename = Application.dataPath + "/playerStats.csv";
        
        levelTimer = 0;
    }

    // Update is called once per frame
    void Update()
    {
        levelTimer += Time.deltaTime;
        
    }

    private void OnEnable()
    {
        Destination.OnLevelClear += RecordTime;
    }
    public void RecordTime()
    {
        passTime.Add(levelTimer);
        Debug.Log("record time" + levelTimer);
        levelTimer = 0f;
    }
    public void writeCSV()
    {
        TextWriter tw = new StreamWriter(filename, false);
        tw.WriteLine("1,2,3,4");
        tw.Close();

        tw = new StreamWriter(filename, true);
        //for () ;

        tw.Close();
    }
}
