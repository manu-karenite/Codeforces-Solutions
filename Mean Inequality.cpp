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
        int n;
        cin>>n;
        vector<int> num ;
        int entry;
        
        for(int i=0;i<2*n;i++)
        {
            cin>>entry;
            num.push_back(entry);
        }
        
        sort(num.begin(),num.end());
        
        //orinting
        
        for(int p=0 , q = 2*n-1;p<=q;p++,q--)
        {
            cout<<num[p]<<" "<<num[q]<<" ";
        }
        cout<<endl;
    }
}
