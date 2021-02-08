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
int sum=0;
for(int i=0;i<n;i++)
{
cin>>arr[i];
sum+=arr[i];
}
//sum is calculated;
 
//performing sorting here
int temp;
 
for(int i=0;i<n-1;i++)
{
for(int j=i+1;j<n;j++)
{
if(arr[j]<arr[i])
{
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}
}
//sorting is performed;
 
//for(int k=0;k<n;k++)
//cout<<arr[k]<<"  ";
 
int coins=0;
int sumofcoins=0;
for(int m=n-1;m>=0;m--)
{
sumofcoins+=arr[m];
coins++;
if(sumofcoins>(sum-sumofcoins))
	break;
 
}
cout<<endl<<coins;
 
return 0;
}
 
