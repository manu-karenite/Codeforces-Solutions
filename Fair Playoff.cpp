/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;
    
    while(test--)
    {
        vector<int> v;
        int element;
        for(int i=0;i<4;i++)
        {
            cin>>element;
            v.push_back(element);
        }
            
            int win1 = max(v[0],v[1]);
            int win2 = max(v[2],v[3]);
            
            sort(v.begin(),v.end());
            
            int f1 = v[3];
            int f2= v[2];
            
            bool ans = false;
            
            
            
            if(((win1 == f1) || (win1 == f2)) &&( (win2==f1) || (win2 ==f2)))
            ans = true;
            if(ans==true)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
            
            
    }
        
    }
