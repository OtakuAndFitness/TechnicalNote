using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RefOutIn : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        Colleague col = new Colleague();
        CreateRefColleague(ref col);
        // CreateColleague(col);
        // CreateInColleague(col);
        Colleague co;
        CreateOutColleague(out co);
        Debug.Log(col.Name + " " + col.Sex);
        // Debug.Log(co.Name + " " + co.Sex);

        int n = 1;
        IncrementInt(ref n);
        Debug.Log(n);

    }

    public void IncrementInt(ref int n){
        n++;
    }

    public class Colleague{
        private string name;
        public string Name{
            get{
                return name;
            }
            set{
                name = value;
            }
        }
        private string sex;
        public string Sex{
            get{
                return sex;
            }
            set{
                sex = value;
            }
        }
        public Colleague(){

        }


    }

    public void CreateRefColleague(ref Colleague c){
        c.Name = "Mike";
        c.Sex = "male";
        c = new Colleague();
        c.Name = "Nacy";
        c.Sex = "female";
    }

    public void CreateOutColleague(out Colleague c){
        c = new Colleague();
        c.Name = "Mike";
        c.Sex = "male";
        
    }

    public void CreateInColleague(in Colleague c){
        //c = new Colleague();//compile error
        c.Name = "Mike";
        c.Sex = "male";
        
    }

    public void CreateColleague(Colleague c){
        c.Name = "Mike";
        c.Sex = "male";
        c = new Colleague();
        c.Name = "Nacy";
        c.Sex = "female";
    }
}
