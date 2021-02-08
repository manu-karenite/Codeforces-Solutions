/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int m , n;
    cin>>n>>m;
    int result=0;
    if( n==1 && m==1)
        result=0;
    else
    {
        int area=n*m;
        result=area/2;
 
    }
    cout<<result;

}
