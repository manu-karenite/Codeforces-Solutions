/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/


#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 int n;
 cin>>n;
 char stones[n];
 cin>>stones;
 char a,b;
 int sum=0;
 for(int i=1;i<n;i++)
 {
    a=stones[i-1];
    b=stones[i];
    if(a==b)
        sum++;
 }
 cout<<sum;
 
 
 
}
