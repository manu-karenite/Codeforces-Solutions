/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/

#include <bits/stdc++.h>
using namespace std;


void solve()
{
    int size;
    cin>>size;
    
    int element;
    unordered_map<int , int> umap;
    
    for(int i=0;i<2*size;i++)
    {
        cin>>element;
        if(umap.find(element)==umap.end())
        {
            cout<<element<<" ";
            umap[element]++;
        }
    }
    cout<<endl;
    
}

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
