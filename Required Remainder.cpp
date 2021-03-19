/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t , x,y,n;
	cin>>t;
	for(int j=0;j<t;j++)
	{
	cin>>x>>y>>n;

	int i=n/x;

	int ans=x*i+y;
	if(ans>n)
		ans-=x;
	cout<<ans<<endl;
	}




}
