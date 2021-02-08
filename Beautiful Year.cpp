/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/


#include <bits/stdc++.h>
using namespace std;
 
int beautifulYear(int year)
{
 
int arr[4];
int k=3;
while(year>0)
{
arr[k--]=year%10;
year=year/10;
}
 
if(arr[2]!=arr[3] && arr[3]!=arr[1]  && arr[3]!=arr[0] && arr[2]!=arr[0] && arr[2]!=arr[1] && arr[1]!=arr[0])
	return -1;
else
	return 1;
}
  
int main()
{
int year;
cin>>year;
int value;
for(int i=year+1 ; i<9013;i++)
{
value=beautifulYear(i);
if(value==-1)
{
cout<<i;
break;
}
 
}
return 0;
}
