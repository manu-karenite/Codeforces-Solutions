/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/

#include <bits/stdc++.h>
using namespace std;


int main()
{
int t;
cin>>t;
int n;
bool result;
int sum_even;
int sum_odd;
int x;


while(t--)
{	sum_odd=0;
	cin>>n;
	if(n==2)
		cout<<"NO"<<endl;
	else
	{
		sum_even=(n/2)*(1+n/2);
		int arr[n/2];
		arr[0]=1;
		int i;
		sum_odd+=arr[0];
		for(i=1;i<n/2-1;i++)
		{
		arr[i]=arr[i-1]+2;
		sum_odd+=arr[i];
		}
		//now , i equals n/2-1 i.e on last index;
		int x=sum_even-sum_odd;
		if(x%2==1 && x>arr[i-1])
			{arr[i]=x;result=true;}
		else
			result = false;
	
	if(result==false)
		cout<<"NO"<<endl;
	else
	{
		cout<<"YES"<<endl;
		for(int i=0,k=2;i<n/2;i++,k+=2)
			cout<<k<<" ";
		for(int j=0;j<n/2;j++)
			cout<<arr[j]<<" ";
		cout<<endl;
	
	}
		
	}

}
return 0;
}



