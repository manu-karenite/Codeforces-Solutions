/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/


#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
 
    int steps=0;
 
    while(n>=5)
 
    {
        steps++;
        n-=5;
    }
 
    while(n>=4)
 
    {
        steps++;
        n-=4;
    }
    while(n>=3)
 
    {
        steps++;
        n-=3;
    }
    while(n>=2)
 
    {
        steps++;
        n-=2;
    }
 
    while(n>=1)
 
    {
        steps++;
        n-=1;
    }
 
    cout<<steps;
 
 
}
