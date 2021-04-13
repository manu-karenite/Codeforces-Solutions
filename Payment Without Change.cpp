/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/

#include <bits/stdc++.h>
using namespace std;




int main()
{
	int test;
	cin>>test;
	long long int a , b , n , sum;
	long long int x;
		
	while(test--)
	{
		cin>>a>>b>>n>>sum;
		if(a*n<=sum)
		{
			if((sum-(a*n))<=b)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}

		else
		{
			int quotient = sum/n;
			quotient = quotient*n;
			if((sum-quotient)<=b)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}


	}
	return 0;


}
