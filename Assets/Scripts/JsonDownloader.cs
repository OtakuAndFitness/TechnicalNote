using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using System.Threading.Tasks;


public class JsonDownloader : MonoBehaviour
{
    readonly string USERS_URL = "https://jsonplaceholder.typicode.com/users";
    private static WaitForSecondsRealtime w = new WaitForSecondsRealtime(1);

    IEnumerator FetchData(){
        Users[] users;
        
        // USERS
        UnityWebRequest www = UnityWebRequest.Get(USERS_URL);
        yield return www.SendWebRequest();
        if (www.isHttpError || www.isNetworkError)
        {
            Debug.Log("A network error occurred");
            yield break;
        }
        string json = www.downloadHandler.text;
        try
        {
            users = JsonHelper.GetJsonArray<Users>(json);
            
        }
        catch
        {
            Debug.Log("An error occurred");
            yield break;
        }
        
        // OUTPUT
        foreach (Users user in users)
        {
            Debug.Log(user.name);
        }
        
    }

    async Task<Users[]> FetchUsers(){
        UnityWebRequest www = UnityWebRequest.Get(USERS_URL);
        www.SendWebRequest();
        while (!www.isDone){
            await Task.Delay(100);
        }
        if (www.isHttpError || www.isNetworkError)
        {
            throw new System.Exception();
        }
        string json = www.downloadHandler.text;        
        Users[] res = JsonHelper.GetJsonArray<Users>(json);
        return res;
        
    }

    // int i = 1;

    IEnumerator Counter(){
        for (int i = 0; i < 100000; i++)
        {
            Debug.Log(i);
            // i++;
            yield return null;
            // yield return 0;
            // yield return w;
            // yield return new WaitForSeconds(1);
        }
    }

    // Update is called once per frame
    void Update()
    {
        if(Input.GetKeyDown(KeyCode.Space)){
            StartCoroutine(FetchData());
        }

        // if (Input.GetKeyDown(KeyCode.M)){
            StartCoroutine(Counter());
        // }
        
    }

    async void LateUpdate() {
        if(Input.GetKeyDown(KeyCode.L)){
            try
            {
                Users[] users = await FetchUsers();
                for (int i = 0; i < users.Length; i++)
                {
                    Debug.Log(users[i].name);
                }
            }
            catch (System.Exception)
            {
                Debug.Log("An error occurred");
            }
            
        }
    }
}
