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
        int size;
        cin>>size;
        
        vector<int> v;
        
        int entry;
        for(int i=0;i<size;i++)
        {
            cin>>entry;
            v.push_back(entry);
        }
        sort(v.begin(),v.end(),greater<int>());
        
       
        
        
        
        int count=0;
        
        for(int i=0;i<v.size();i++)
        {
            for(int j=i+1;j<v.size();j++)
            {
                
               if(j==v.size())
                    {i++;break;}
                
                if((__gcd(v[i],2*v[j])>1) || (__gcd(v[j],2*v[i])>1))
                count++;
                   
                    
            
                }
      
        }
         cout<<count<<endl;
}
return 0;
}
