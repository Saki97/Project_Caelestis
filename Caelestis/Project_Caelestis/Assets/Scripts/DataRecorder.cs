using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Analytics;
using System.IO;
public class DataRecorder : MonoBehaviour
{
    /// <summary>
    /// created by Yue Yu
    /// </summary>
    public static DataRecorder _instance;

    void Awake()
    {
        _instance = this;
        //DontDestroyOnLoad(this.gameObject);
    }
    public static DataRecorder Instance
    {
        get
        {
            return _instance;
        }
    }
    string filename = "";

    float levelTimer;
    int levelNumber = 1;
    int DeathCount;
    int CoinCount;
    float OnBeatRate;// = onbeatcount / commandcount
    int OnBeatCount;
    int CommandCount;
    int DamageCount;
    int SpikeDmgCount;
    int MonsterDmgCount;
    int MonsterBeatCount;
    int FallCount;

    List<float> passTime = new List<float>();
    

    void Start()
    {
        //filename = Application.dataPath + "/playerStats.csv";


        levelTimer = 0f;
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
        ////passTime.Add(levelTimer);
        ////Debug.Log("record time" + levelTimer);
        AnalyticsResult result = Analytics.CustomEvent("Level_passed", new Dictionary<string, object>
        {
            {"level_number",levelNumber  },
            {"pass_time",levelTimer },
            {"death_count", DeathCount},
            {"coin_count", CoinCount },
            {"damage_count", DamageCount },
            {"spike_damage_count", SpikeDmgCount},
            {"lava_damage_count",SpikeDmgCount },
            {"monster_damage_count", MonsterDmgCount },
            {"monster_beat_count",MonsterBeatCount },
            {"fall_count",FallCount }
        });
        Debug.Log("result sent" + result);
        levelTimer = 0f;
    }

    public void DeathCounting()
    {
        DeathCount++;
    }

    public void CoinCounting()
    {
        CoinCount++;
    }

    private void ComputeBeatRate()
    {
        OnBeatRate = (float)OnBeatCount / (float) CommandCount;
    }

    public void OnBeatCounting()
    {
        OnBeatCount++;
    }

    public void CommandCounting()
    {
        CommandCount++;
    }

    public void DamageCounting(int damage)
    {
        DamageCount += damage;
    }

    public void SpikeDmgCounting(int damage)
    {
        SpikeDmgCount += damage;
    }

    public void MonsterDmgCounting(int damage)
    {
        MonsterDmgCount += damage;
    }

    public void MonsterBeatCounting()
    {
        MonsterDmgCount++;
    }

    public void FallCounting()
    {
        FallCount++;
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
