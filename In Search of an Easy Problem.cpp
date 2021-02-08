/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/


#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int n;
    cin>>n;
    int flag=0;
    int a;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a==1)
        {
            flag=1;break;
        }
    }
    if(flag==0)
        cout<<"EASY";
    else
        cout<<"HARD";
    return 0;
    
 
}
 
 
