/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin>>x;
    
    int count=0;
    for(int i =x;i>0;)
    {
        int rem = i%2;
        count= count+rem;
        i = i/2;
    }
    cout<<count;
    return 0;
}
