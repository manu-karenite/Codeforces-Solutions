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
int time;
cin>>n>>time;
char queue[n];
cin>>queue;
int boy_position[n]={};
int i;
int key=0;
int position=0;
int count,j;
while(time--)
{
key=0;
i=0;
while(i<n-1)
{
if(queue[i]=='B' && queue[i+1]=='G')
	{
	boy_position[key]=i;
	key++;}
i++;
}//boys' positions are marked'
 
count=key;
for(j=0; j<count;j++) // to find every boy position
{
	position = boy_position[j];
	queue[position]='G';
	queue[position+1]='B';
	
}
 
 
}
cout<<queue;
return 0;
 
 
}
