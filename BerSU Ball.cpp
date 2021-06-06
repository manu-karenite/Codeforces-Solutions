/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr , arr+n); //nlogn
    
    int m;
    cin>>m;
    unordered_map<int , int> umap;
    int element;
    for(int i=0;i<m;i++)
    {
        cin>>element;
        umap[element]++;
    }
    
    int count=0;
    for(int i=0;i<n;i++)
    {
        int boy = arr[i];
         if(umap.find(boy-1)!=umap.end())
                {umap[boy-1]--;count++;if(umap[boy-1] == 0)umap.erase(boy-1);}
        else if(umap.find(boy)!=umap.end())
                {umap[boy]--;count++;if(umap[boy] == 0)umap.erase(boy); }
        else if(umap.find(boy+1)!=umap.end())
                {umap[boy+1]--;count++;if(umap[boy+1] == 0)umap.erase(boy+1);} 
        
        
        
       
            
    }
    cout<<count;
    return 0;
}


