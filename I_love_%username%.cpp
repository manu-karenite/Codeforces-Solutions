/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
https://codeforces.com/contest/155/problem/A
*/


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;
    
    int amazing =0;
    
    
    int firstItem;
    cin>>firstItem;
    
    int big =firstItem;
    int small =firstItem;
    
    int nextItem;
    
    //now startfrom 2;
    for(int i=1;i<test;i++)
    {
        cin>>nextItem;
        if(nextItem < small)
        {
            amazing++;
            small = nextItem;
        }
        else if (nextItem >big)
        {
            amazing++;
            big = nextItem;
        }
    }
    
    cout<<amazing;
    return 0;
    
}
