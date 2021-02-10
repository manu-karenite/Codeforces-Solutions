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
int crime=0;
int police=0;
int entry;
for(int i=0;i<n;i++)
{
cin>>entry;
if(entry==-1 && police==0)
	crime++;
else if(entry==-1 && police!=0)
	police--;
else if (entry!=-1 && police==0)
	police+=entry;
else
	police+=entry;
	


}
cout<<crime;
return 0;
}



