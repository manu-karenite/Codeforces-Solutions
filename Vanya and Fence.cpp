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
int h;
cin>>n>>h;
int count=0;
int entry;
for(int i=0;i<n;i++)
{
cin>>entry;
if(entry>h)
	count=count+2;
else
count++;
 
 
}
cout<<count;
return 0;
}
 
 
 
 
