/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/

#include <bits/stdc++.h>

using namespace std;

#define loop(i,a,b) for(int i=a;i<b;i++)




int main()
{
	int n;
	cin>>n;
	 int arr[n];
	 stack<int> s;
	 int entry;
	 int great=n;
	 priority_queue<int> pq;
	 loop(i,0,n)
	 {

	 	cin>>entry;
	 	pq.push(entry);
	 	if(pq.top()==great)
	 	{
	 		while(pq.top()==great)
	 		{
	 			cout<<pq.top()<<" ";
	 			pq.pop();
	 			great--;
	 		}
	 		cout<<endl;
	 	}
	 	else
	 	{
	 	
	 		cout<<endl;
	 	}
	 	if(great==0)
	 	    break;


	}
	 

	 return 0;
}
