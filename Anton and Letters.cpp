/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    char a[1001];
    cin.getline(a,1001);
    int i=1;
    char c;
    int freq[256]={};
    int z= strlen(a);
    while(i<=z-2)
    {
        c=a[i];
        if(c!=(char)32 && c!=',')
        {
            //means it is a letter
           
            freq[(int)c]++;
        }
        i++;





    }
    int count=0;
    for(int i=0;i<256;i++)
    {
        if(freq[i]>0)
            count++;
    }
    cout<<count;
    return 0;




}
