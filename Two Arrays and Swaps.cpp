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
while(t--)
{

int n ,turns;
cin>>n>>turns;
int a[n];
int b[n];
for(int i=0;i<n;i++)
	cin>>a[i];
for(int i=0;i<n;i++)
	cin>>b[i];
sort(a , a+n);
sort(b,b+n);

int temp;
int i=0 , j=n-1 , k=1;
while(i<n && j>=0 && k<=turns)
{
if(a[i]<b[j])
{
	temp=a[i];
	a[i]=b[j];
	b[j]=temp;
	i++;
	j--;
	k++;
}
else if(a[i]>=b[j])
	i++;
	
if(i==n || j==-1 || k>turns)
	break;


}
int sum=0;
for(int p=0;p<n;p++)
	sum+=a[p];
cout<<sum<<endl;;
}
return 0;

}

