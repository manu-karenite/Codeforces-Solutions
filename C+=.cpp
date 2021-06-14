/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/

#include <bits/stdc++.h>

using namespace std;


#define loop(i,a,b) for(int i=a;i<b;i++)

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
    
        int a ; 
        int b;
        int n;
        cin>>a>>b>>n;
    
        int great = max(a,b);
        int less = min(a,b);
    
            vector<int> v;
                v.push_back(great+less);
            if(v[0]>n)
            {
                cout<<1<<endl;
            }
             else
                {
                     v.push_back(great+less+great);
                        if(v[1]>n)
                        {
                            cout<<2<<endl;
                        }
                        else
                        {
                            // main code write here
                            
                            //not on 2 , meaning must be greater than2 
                            int i =1;
                            while(v[i]<=n) //loop runs
                            {
                               i++;
                                v.push_back(v[i-1]+v[i-2]);
                                 
                                if(v[i]>n)
                                {
                                    cout<<i+1<<endl;
                                    break;
                                }
                            }
                        }
                }
    }
    return 0;
    
}
