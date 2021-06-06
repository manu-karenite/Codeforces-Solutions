/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/


#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    int n , m ;
    int a;
    
    cin>>n>>m>>a;
    
    
    int npure=n;
    if(n%a!=0)
     npure = n + (a-n%a);
    
    int mpure = m;
    if(m%a!=0)
    mpure=m + (a - m%a);
    
    ll length = npure/a;
    ll breadth = mpure/a;
    
    ll ans = length*breadth;
    
    cout<<ans;
    return 0;
}
