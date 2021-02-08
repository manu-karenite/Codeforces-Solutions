/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/


#include<iostream>
#include<string>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
int main()
{
string x;
cin>>x;
int r=x.size();
char four='4';
char seven='7';
int c=0;
for(int i=0;i<r;i++)
    {if ((x[i]==four)||(x[i])==seven)
        c++;
    else
        c=c+0;}
if ((c==4)||(c==7))
    cout<<"YES";
else
    cout<<"NO";
return 0;
 
 
}
