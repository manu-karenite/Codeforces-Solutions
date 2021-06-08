/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int solve(ll n)
{
    int count=0;
    while(true)
    {
        if(n==1)
        {
            return count;
        }
        else if (n==2 || n==4 || n==5)
            return -1;
        else if (n%3!=0 && n%6!=0)
            return -1;
        else if (n%6==0)
        {
            count ++;
            n = n/6;
        }
        else if(n%3==0)
        {
            count = count+2;

            n = n/3;
        }
        
    }
   
}

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        ll n;
        cin>>n;
        cout<<solve(n)<<endl;
    }
}
