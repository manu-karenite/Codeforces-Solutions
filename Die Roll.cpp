/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
 int one,two;
 cin>>one>>two;

 
 
     int high = max(one,two);
     int chance = 6-high+1;
     if(chance==0)
     {
         cout<<"0/1";
     }
     else
     {
     
     int l = __gcd(6,chance);
     cout<<chance/l<<"/"<<6/l;
     }
    
    return 0;
}
