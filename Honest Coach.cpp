/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/

#include <bits/stdc++.h>

using namespace std;


#define loop(i,a,b) for(int i=a;i<b;i++)

void solve()
{
    int size;
    cin>>size;
    
   int arr[size];
   
   loop(i,0,size)
   {
       cin>>arr[i];
   }
   sort(arr,arr+size);
   int count =arr[1]-arr[0];
   loop(i,2,size)
   {
       if((arr[i]-arr[i-1])<count)
        count = arr[i]-arr[i-1];
   }
   cout<<count<<endl;
   
}



int main()
{
    int test;
    cin>>test;
    loop(i,0,test)
        solve();
    return 0;
    
    
}
