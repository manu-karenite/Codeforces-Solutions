/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int *q=new int;
	int *time = new int;
	cin>>*q>>*time;
	*time = 240-*time;
	int *i=new int(1);
	int *count=new int(0);
	int *solve_time = new int(0);
	int *multiplier=new int(5);
	while(*i<=*q)
	{
		
		if((*solve_time+*multiplier)<=(*time))
		{
			(*count)++;
			(*solve_time)=(*solve_time)+(*multiplier);
			(*multiplier)=*multiplier+5;
			
		}
		else
			break;
		(*i)++;
	}
	cout<<*count;

	delete q;
	delete time;
	delete i;
	delete count;
	delete solve_time;
	delete multiplier;

	return 0;




}
