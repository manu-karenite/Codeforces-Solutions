/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/


#include <bits/stdc++.h>
 
using namespace std;

int main() {
    int i=1;
    int x;
    cin>>x;
    //char it[4]={i,t,'\0'};
    while(i<=x)
    {
        cout<<"I ";
        if(i%2==1)
            cout<<"hate ";
        else
            cout<<"love ";
        if(i<x)
            cout<<"that ";
        i++;
    }
    cout<<"it";
 
    
    return 0;
    }
 
 
