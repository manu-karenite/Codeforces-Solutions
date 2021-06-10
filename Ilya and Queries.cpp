/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/



#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int count(int a , int b , int * arr)
{
    return(arr[b-1]-arr[a-1]);
}

int main()
{
  
   string pattern;
   cin>>pattern;
   
   int arr[pattern.size()];
   arr[0]=0;
   for(int i=0;i<pattern.size()-1;i++)
   {
       if(pattern[i]==pattern[i+1])
        arr[i+1]=arr[i]+1;
        else
            arr[i+1]=arr[i];
   }
   
   ll test;
   cin>>test;
   while(test--)
   {
       int a , b;
       cin>>a>>b;
       cout<<count(a,b,arr)<<endl;
       
   }
   return 0;
   
            
    
}
