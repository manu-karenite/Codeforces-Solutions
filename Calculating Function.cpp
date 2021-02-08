/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/


#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int a;
    scanf("%lld",&a);
    /*
    long long int k=-1;
    long long int sum=0;
    long long int sum1=0;
    for(int i=0;i<=a;i=i+2)
    {
        sum+=i;
    }
    for(int i=1;i<=a;i=i+2)
    {
        sum1+=i;
    }
    cout<<(sum-sum1); */
 
    if(a%2==0)
    cout<<a/2;
    else
    cout<<((a/2)+1)*-1; 
    
    return 0;
    }
 
 
