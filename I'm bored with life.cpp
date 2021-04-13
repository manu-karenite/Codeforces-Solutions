/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/

#include <bits/stdc++.h>
using namespace std;


inline int getMinimum(int a , int b)
{
	if(a<b)
		return a;
	else
		return b;
}

int getFactorial(int x)
{
	if(x==0)
		return 1;
	int smallfactorial = getFactorial(x-1);
	return (x*smallfactorial);
}
int main()
{
	int a , b;
	cin>>a>>b;
	int minimum = getMinimum(a,b);
	int fact =  getFactorial(minimum);
	cout<<fact<<endl;
	return 0;


}
