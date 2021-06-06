
/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/


#include <bits/stdc++.h>
using namespace std;


inline bool checkPrime(int a)
{
    int count=0;
    for(int i=2;i<a;i++)
    {
        if(a%i==0)
            count++;
        if(count>0)
        {
            return false;
            
        }
    }
    return true;
        
}

int main()
{
    int n , m;
    cin>>n>>m;
    bool ans = checkPrime(m);
    if( ans == false)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        int count=0;
        for(int i=n+1;i<=m;i++)
        {
            bool get = checkPrime(i);
            if(get)
            {
                count++;
            }
            if(count>1)
            {
                cout<<"NO";
                return 0;
            }
        }
        cout<<"YES"<<endl;
    }
    return 0;
}
