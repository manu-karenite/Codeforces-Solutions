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
int t;
cin>>n>>t;


int arr[n];
arr[0]=-1;
for(int i=1;i<n;i++)
	cin>>arr[i];

int source=1;
int destination=1;
int result=0;
while(true)
{
destination=source+arr[source];
if(destination==t )
	{result=1;break;}
else if (destination>t)
{break;}

source=destination;


}
if(result==0)
	cout<<"NO";
else
	cout<<"YES";
return 0;
}


 
