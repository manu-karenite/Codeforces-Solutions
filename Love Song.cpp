  
/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
   int len;
   cin>>len;
   
   int q;
   cin>>q;
   
   string word;
   cin>>word;
   
   
  int arr[len];
 
  int prev=0;
  for(int i=0;i<len;i++)
  {
     arr[i]=(int)word[i]-96+prev;
     prev=arr[i];
      
  }
  
  
  
   
   
   
   while(q--)
   {
       int x , y;
       cin>>x>>y;
       if(x==1)
       {
           int prev = 0;
           cout<<(arr[y-1]-arr[x-1] + arr[x-1] - prev)<<endl;
       }
       else
       {
           int prev = arr[x-2];
            cout<<(arr[y-1]-arr[x-1] + arr[x-1] - prev)<<endl;
           
       }
       
   }
   return 0;
}
