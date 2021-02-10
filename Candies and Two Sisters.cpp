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
int entry;
for(int i=0;i<n;i++)
{

cin>>entry;
if(entry%2==0 && entry!=2)
	cout<<(entry)/2-1;
else if (entry%2==0 && entry==2)
	cout<<0;
else if (entry%2==1 && entry==1)
	cout<<0;
else if (entry%2==1 && entry!=1)
	cout<<(entry/2);
cout<<endl;

}
return 0;




}
