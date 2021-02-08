/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/


#include <bits/stdc++.h>
 
using namespace std;

int main() {
    long long int end;
    long long int index;
    //int value;
    cin>>end>>index;
    long long int value=-1;
    int i=1;
    if(end%2==0)
    {
        long long int odd_half=end/2;
        
        if(index<=odd_half)
        {
            //we print odd numbers
            value=index*2-1;
        }
        else
        {   //we print even nos
            value=(index-odd_half)*2;
        }
    }
    else // when end is odd
    {
        long long int odd_half=(end/2)+1;
        if(index<=odd_half)
        {
            value=index*2-1;
        }
        else
        {
            value=(index-odd_half)*2;
        }
    }
    cout<<value;
    return 0;
}
