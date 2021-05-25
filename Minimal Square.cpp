/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
https://codeforces.com/contest/1360/problem/A
*/

#include <bits/stdc++.h>
using namespace std;


void solve(int a , int b)

{
    int len = max(a,b);
    int bre = min(a,b);
    
    int side;
    side = len;
    if(2*bre >side)
    {
        side = 2*bre;
    }
    cout<<side*side<<endl;
}

int main()
{
    int test;
    cin>>test;
    
    int a , b;
    while(test--)
    {
        cin>>a>>b;
        solve(a,b);
    }
    return 0;
}
