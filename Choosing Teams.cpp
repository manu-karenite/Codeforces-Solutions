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
int k;
cin>>n>>k;
int time_up = 5-k;
int entry;
int count=0;
for(int i=0;i<n;i++)
{
cin>>entry;
if(entry<=time_up)
	count++;

}
cout<<count/3;
return 0;
}
