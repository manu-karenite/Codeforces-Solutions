/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/


#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int a[5][5];
    int one;
    int row,column;
    for(int i=1 ; i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            
            cin>>a[i-1][j-1];
 
 
        }
        
    }
 
 
for(int i=1 ; i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            
            one=a[i-1][j-1];
            if(one==1)
            {
                row=i;
                column=j;
                break;
            }
 
        }
        if(one==i)
            break;
        
    }
 
 
 
    int sum = fabs(column-3) + fabs(row-3);
    cout<<sum;
 
 
 
 
 
 
}
