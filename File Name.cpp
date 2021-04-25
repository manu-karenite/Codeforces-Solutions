/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/

#include <bits/stdc++.h>
using namespace std;




int main()
{
	int size ;
	cin>>size;
	char * name = new char[size];

	cin>>name;

	int * arr = new int[size];
	int j=0;
	char a;
	int substrCount =0;
	for(int i=0;i<size;i++)
	{
		a=name[i];
		if(a=='x')
		{
			substrCount++;

		}
		else
		{
			if((substrCount!=0 && substrCount>2))
			{
				arr[j] = substrCount;
				j++;
				

			}
			substrCount=0;

		}


	}
	if(substrCount!=0 && substrCount>2)
	{
		arr[j] = substrCount;
				j++;

	}
	//stored in the array;

	int sumToDelete=0;
	for(int i =0;i<j;i++)
	{
		sumToDelete+=(arr[i]-2);
	}

	cout<<sumToDelete;
	return 0;

}
