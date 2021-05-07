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
    int len;
    int flag=0;
    cin>>len;
    
    char string[len];
    cin>>string;
    stack <char> s1 ;
    int arr[255]={};
       
    for(int i=0;i<len;i++)
    {
        char a = string[i];
        if(s1.empty()==true  && arr[a]==0)
        {
            s1.push(a);
        }
        else if (s1.empty()==true && arr[a]!=0)
        {
            flag=1;
            break;
        }
        else
        {
            if(s1.top()==a)
            {
                s1.push(a);
            }
            else
            {
                if(arr[a]!=0)
                {
                    flag=1;
                    break;
                }
                else 
                {
                    arr[s1.top()]=1;
                    while(s1.empty()==false)
                    {
                        s1.pop();
                    }

                    s1.push(a);
                    
                    
                }
            }
        }
        
    }
   
    if(flag==1)
        {
            cout<<"NO"<<endl;
            
        }
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
