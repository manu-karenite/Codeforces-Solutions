/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/

#include<iostream>
#include <string>
 
using namespace std;
int main()
{
    int j;
    int x=0;
    int n;
    cin>>n;
    for (int i=0;i<n;i++)
        {
            string st;
            cin>>st;
            for ( j=0;j<3;j++)
            {
                if (st[j]=='+')
                    {x++;
                    break;}
 
            }
            if (j==3)
                x=x-1;
 
        }
        cout<<x;
        return 0;
        }
