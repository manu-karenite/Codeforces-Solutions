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
int a,b,c;
cin>>a>>b;
for (int i=0;i<b;i++)
    {c=0;
    c=a%10;
    if (c==0)
        a=(a/10);
    else
        a=a-1;}
cout<<a;
 
 
 
 
return 0;
 
 
 
 
 
 
}
