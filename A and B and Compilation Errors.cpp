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
    unordered_map<int , int> umap;
    int entry;
    for(int i=0;i<n;i++)
    {
        cin>>entry;
        umap[entry]++;
    }
    
       unordered_map<int, int> umap1;
       for(int i=0;i<n-1;i++)
       {
           cin>>entry;
           umap1[entry]++;
       }
       
       for(auto it=umap.begin();it!=umap.end();it++)
       {
           if(umap1[it->first]!=umap[it->first])
            {cout<<it->first<<endl;break;}
       }
       
       unordered_map<int, int> umap2;
       for(int i=0;i<n-2;i++)
       {
           cin>>entry;
           umap2[entry]++;
       }
       
       for(auto it=umap1.begin();it!=umap1.end();it++)
       {
           if(umap2[it->first]!=umap1[it->first])
            {cout<<it->first<<endl;break;}
       }
       
       
       
       
       
       
     
       return 0;
       
       

}
