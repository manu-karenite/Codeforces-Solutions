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
int  l;
cin>>n>>l;
int arr[n];
for(int i=0;i<n;i++)
	cin>>arr[i];
//to sort
int temp;
for(int p=0;p<n-1;p++)
{
for(int q=p+1;q<n;q++)
{
if(arr[p]>arr[q])
{
temp=arr[p];
arr[p]=arr[q];
arr[q]=temp;
}

}

}


int maximum_gap=arr[0];
for(int p=1;p<n;p++)
{
if((arr[p]-arr[p-1])>maximum_gap)
	maximum_gap=arr[p]-arr[p-1];
}

	int a=arr[0];
	int b=l-arr[n-1];
	
	
	
	if(maximum_gap/2.0>=a && maximum_gap/2.0>=b)
		printf("%.9f",maximum_gap/2.0);
	else if(b>a)
		printf("%.9f",(float)b);
	else
		
	printf("%.9f",(float)a);





return 0;
}
