/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/

#include <iostream>
#include <string>
using namespace std;
 
int main(void)
{
   int n,k;
   cin>>n>>k;
   int arr[n];
   for(int r=0;r<n;r++)
    cin>>arr[r];
   int x=arr[k-1];
   int c=0,t;
 
   for(int i=0;i<n;i++)
   {
       t=arr[i];
       if(t>=x && t>0)
        c++;
       else
        c=c+0;
 
   }
   cout<<c;
   return 0;
 
 
}
