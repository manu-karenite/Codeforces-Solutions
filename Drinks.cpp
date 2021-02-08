/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/

#include <bits/stdc++.h>
 
using namespace std;

int main() {
float n;
cin>>n;
float sum=0;
float a;
for(int i=0;i<n;i++)
{
    cin>>a;
    //cout<<(a/100.0000000000000)<<" ";
    sum+=a;
 
}
float b=sum/100;
//cout<<b;
//cout<<b;
b=(b/n)*100;
printf("%.12f",b);
 
 
    /*
    cout<<(x^y);
    
*/
return 0;
 
}
