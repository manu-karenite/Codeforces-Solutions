
/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/
#include <bits/stdc++.h>

using namespace std;


#define loop(i,a,b) for(int i=a;i<b;i++)

int main()
{
    int size;
    cin>>size;
    
    int high = -1;
    
    unordered_map<int,int> umap;
    int entry;
    loop(i,0,size)
    {
        cin>>entry;
        
        //add to map first
        umap[entry]++;
        if(entry>high)
            high = entry;
    }                       //o n
    
    //map filled
    //highest got
    int arr[high+1];
    arr[0]=0;
    loop(i,1,high+1)
    {
        arr[i]=arr[i-1]+umap[i];
        //fills the array;   //o n
    }
    int q;
    cin>>q;
    while(q--)
    {
        int t;
        cin>>t;
        if(t>=high)
            cout<<size<<endl;
        else
        cout<<arr[t]<<endl;
    }
    return 0;
    
}
