/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/

Question : https://codeforces.com/contest/1525/problem/A

*/


#include <bits/stdc++.h>
using namespace std;


int main()
{
    

    int test;
    cin>>test;
    while(test--)
    {




    int k;
    cin>>k;
    int gcd = __gcd(k,100);
    if(gcd == 1)
    {
        //no reduction possible
        cout<<"100"<<endl;

    }
    else
    {
        cout<<100/gcd<<endl;
    }

}
return 0;

}

