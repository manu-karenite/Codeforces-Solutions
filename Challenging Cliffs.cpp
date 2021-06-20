  
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
        int size;
        cin>>size;
        int arr[size];
        for(int i=0;i<size;i++)
        {
            cin>>arr[i];
            
        }
        sort(arr,arr+size);
        int si=-1;
        int li =-1;
        si = 0;
        li=1;
        int high = arr[1]-arr[0];
        for(int i=2;i<size;i++)
        {
            if(arr[i]-arr[i-1]<high)
            {
                si = i-1;
                li = i;
                high = arr[li]-arr[si];
            }
        }
        cout<<arr[si]<<" ";
        for(int i=li+1;i<size;i++)
        {
            cout<<arr[i]<<" ";
        }
        for(int i=0;i<si;i++)
        {
            cout<<arr[i]<<" ";
        
        }
        cout<<arr[li]<<endl;
       
        
    }
    return 0;
}
