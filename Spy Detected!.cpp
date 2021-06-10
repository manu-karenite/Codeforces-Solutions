/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        int element;
        unordered_map<int,int> umap;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>element;
            umap[element]++;
            arr[i]=element;
        }
         element = -1;
         for(auto it = umap.begin();it!=umap.end();it++)
         {
             if(it->second==1)
                {element = it->first;break;}
         }
         for(int i=0;i<n;i++)
         {
             if(arr[i]==element)
             {
                 cout<<i+1<<endl;
             }
         }
        
    }
    return 0;
}
