/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
https://codeforces.com/contest/1527/problem/A
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
    
        int entry;
        cin>>entry;
        
        if(entry==2)
            {cout<<1<<endl;continue;}
        else if (entry==1)
            {
                cout<<0<<endl;continue;
                
            }
            
        else
        {
        int x = log2(entry);
        cout<<int(pow(2,x))-1<<endl;
        }
}
      return 0;
  
    }
    
