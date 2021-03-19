/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int *arr = new int[3];
	int i=0;
	while(i<3)
	{
		cin>>*(arr+i);
		i++;
	}
	sort(arr , arr+3);
	int * ans = new int;
	*ans = (*(arr+2)-*(arr));
	cout<<*ans;
	delete []arr;
	
	delete ans;

	return 0;

}
