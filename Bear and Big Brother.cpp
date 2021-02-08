/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/

#include <bits/stdc++.h>
using namespace std;
 
int age ( int limak , int bob)
{
    int year=0;
    while(limak<=bob)
    {
        
        year++;
        limak=limak*3;
        bob=bob*2;
 
 
    }
    return year;

}
 
int main()
{
 int limak , bob;
 cin>>limak>>bob;
cout<<age(limak,bob);
return 0;

}
