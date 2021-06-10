/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n , m;
    cin>>n>>m;
    
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int sum =0;
    for(int i=0;i<m;i++)
    {
        if(arr[i]>0)
            break;
        sum = sum + arr[i];
    }
    
    cout<<sum*-1<<endl;
    return 0;
}
