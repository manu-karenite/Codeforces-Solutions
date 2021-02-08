/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/


#include<iostream>
#include<string>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
int main()
{
int k,n,w;
cin>>k>>n>>w;
int def=0;
int p=0;
for(int i=1;i<=w;i++)
   p=p+k*i;
if((p-n)>0)
    cout<<(p-n);
else
    cout<<def;
return 0;
}
