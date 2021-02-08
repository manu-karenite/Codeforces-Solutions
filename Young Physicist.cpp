/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/


#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{
int n;
cin>>n;
 
int x=0;int y=0;int z=0;
int a,b,c;
for(int i=0;i<n;i++)
    {a=0;b=0;c=0;
    cin>>a>>b>>c;
    x=x+a;
    y=y+b;
    z=z+c;}
if((x==0) && (y==0)&& (z==0))
    cout<<"YES";
else
    cout<<"NO";
return 0;
 
 
 
}
