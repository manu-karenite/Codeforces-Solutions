 /*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/


#include <bits/stdc++.h>
using namespace std;
 
int main()
{
int n , m;
cin>>n>>m;
int arr[m];
for(int i=0;i<m;i++)
	cin>>arr[i];
//sorting the array
int temp;
for(int i=0;i<m-1;i++)
{
for(int j=i+1;j<m;j++)
{
if(arr[j]<arr[i])
{
temp = arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}
}
int x;
//for(int p=0;p<m;p++)
	//cout<<arr[p]<<" ";
//array is sorted;

int smallestGift = arr[n-1]-arr[0];
int p=1;
while(p<=m-n)
{
//cout<<p<<"****";
x=arr[p+n-1]-arr[p];
if(x<smallestGift)
	smallestGift=x;
p++;

}
cout<<smallestGift;




return 0;
}
