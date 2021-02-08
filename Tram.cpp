/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/

Copy
#include<iostream>
#include<string>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
int main()
{
 
int a=0;int b=0;
int t;
int p=0;
cin>>t;
int arr[t];
 
for(int i=0;i<t;i++)
    {cin>>a>>b;
    p=p-a;
    p=p+b;
    arr[i]=p;}
//cout<<p;
int m=arr[0];
for(int j=0;j<t;j++)
    {if (arr[j]>m)
        m=arr[j];
    else
        m=m+0;}
 
cout<<m;
 
return 0;
 
 
 
 
 
 
 
 
}
