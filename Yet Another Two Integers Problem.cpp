 /*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/


#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,a,b,res;
	cin>>t;
	int i=1;
	while(i<=t)
	{
		scanf("%d %d",&a,&b);
		int small,big;
		if(a==b)
			res=0;
		else
		{
			if(a<b)
			{
				big=b;small=a;
			}
			else 
			{
				big=a;small=b;
			}
			res=((big-small)/10);
			int rem=(big-small)%10;
			if(rem>=1 && rem<=9 )
				res++;
		}
		cout<<res<<endl;
		i++;
	}
	return 0;
}
