/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int k , r;
	cin>>k>>r;
	int rem = k%10;
	int ans;
	if(k<10 && r<10 && r%k==0)
		ans = r/k;
	else
	{
	if(k==1)
		ans =r;
	else
	{
	
	if(rem!=r)
	{
		int i=1;
		while(i>0)
		{

			if(((10*i+r)%k)==0)
				{ans = ((10*i+r)/k);break;}
			else if (((10*i)%k)==0)
			{
				ans = (10*i)/k;
				break;
			}
			i++;

		}
		

	}
	else 
	{
		ans=1;

	}
}}
	cout<<ans;
	return 0;

}
