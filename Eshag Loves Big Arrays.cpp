/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
https://codeforces.com/contest/1529/problem/A
*/

#include <bits/stdc++.h>

using namespace std;

void solve(vector<int> v , int size)
{
    sort(v.begin(),v.end());
    int count=1;
    int f = v[0];
    for(int i=1;i<size;i++)
    {
        if(v[i]==f)
        {
            count++;
            continue;
            
        }
        else
        {
            break;
        }
    }
    cout<<size-count<<endl;
}

int main()
{
    int test;
    cin>>test;
    int entry;


    while(test--)
    {
        cin>>entry;
        int element;
        vector<int> v;
        for(int i=0;i<entry;i++)
        {
            cin>>element;
            v.push_back(element);
            
        }
        solve(v,entry);
    }
    return 0;

}





 
