/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/

#include<iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string first;
    string second;
    cin>>first;
    cin>>second;
    int x=0;
    int len=first.size();
    transform(first.begin(), first.end(), first.begin(), ::toupper);
    transform(second.begin(), second.end(), second.begin(), ::toupper);
 
    for (int i=0;i<len;i++)
    {
        char char1=first[i];
        char char2=second[i];
        int int_c1 = int(char1);
        int int_c2 = int(char2);
        if (int_c1==int_c2)
            x=x+0;
 
        else if (int_c1>int_c2)
        {
            x=1;
            break;
        }
 
 
 
        else if (int_c1<int_c2)
            {
            x=-1;
            break;
            }
 
    }
    cout<<x;
 
 
 
 
    return 0;
 
 
 
 
}
