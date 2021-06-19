/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
https://codeforces.com/contest/1399/problem/A
*/


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int size;
        cin>>size;
        vector<int> v;
        int entry;
        
        for(int i=0;i<size;i++)
        {
            cin>>entry;
            v.push_back(entry);
        }
        
        sort(v.begin() , v.end());
        
        int diff=1;
        bool ans = true;
        for(int i=1;i<size;i++)
        {
            if((int)fabs(v[i]-v[i-1])<=1)
                continue;
            else
            {
                ans=false;
                break;
            }
        }
        if(ans==true)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}
