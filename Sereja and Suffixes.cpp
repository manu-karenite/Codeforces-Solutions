/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/

#include <bits/stdc++.h>
using namespace std;



int main()
{
    int n;int m;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    unordered_map<int,int> umap1;
    int arr2[n];
    for(int i=n-1;i>-1;i--)
    {
        umap1[arr[i]]++;
        arr2[i]=umap1.size();
    }
    int num;
    for(int i=0;i<m;i++)
    {
        cin>>num;
        cout<<arr2[num-1]<<endl;
    }
    return 0;
}
