/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    ll n;
    cin>>n;
    if(n==1)
    {
        cout<<"NO"<<endl;
        
    }
    else if (n%2==1)
    {
        cout<<"YES"<<endl;
    }
    else if (n%2==0)
    {
        double x = log2(n);
        double y;
        double fact = modf(x , &y);
        if(fact==0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
