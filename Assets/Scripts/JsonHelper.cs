using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using LitJson;

public class JsonHelper
{
    public static T[] GetJsonArray<T>(string json){
        T[] res = JsonMapper.ToObject<T[]>(json);
        return res;
    }
}
