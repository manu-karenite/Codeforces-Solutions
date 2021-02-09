 /*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,c;
	int arr[4];
        cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];
	sort(arr,arr+4);
	int x=arr[0];
int y=arr[1];
int z=arr[2];
int sum=arr[3];

	int r= x-z;
	a=(r+y)/2;
	b=x-a;
	c=sum-a-b;
	cout<<a<<" "<<b<<" "<<c;
	return 0;
}
 
