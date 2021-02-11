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
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
	cin>>arr[i];
sort(arr,arr+n);
int maximum=arr[n-1];
int count=0;
for(int i=0;i<n-1;i++)
{
count+=maximum-arr[i];

}
cout<<count;
return 0;
}
