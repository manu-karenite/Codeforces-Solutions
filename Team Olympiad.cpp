/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/

#include <bits/stdc++.h>
using namespace std;

int minimum(int p , int q , int r)
{
	int arr[3]={p,q,r};
	sort(arr,arr+3);
	return arr[0];

}
 int main()
 {
 	//step 1 : read total number

 	int total;
 	cin>>total;
 	int arr[total];
 	int entry;

 	//step 2 : declaring 3 arrays for three specialistations of size total to store just positions

 	int programming[total];
 	int mathematics[total];
 	int physical[total];

 	//step 3 : Filling up of specialisations arrays where p,q,r denote count of elements in three arrays
 	int p =0 , q=0 , r=0;

 	for(int i=0;i<total;i++)
 	{
 		cin>>entry;
 		if(entry==1)
 		{
 			programming[p]=i+1;
 			p++;
 		}
 		else if (entry==2)
 		{
 			mathematics[q]=i+1;
 			q++;
 		}
 		else
 		{
 			physical[r]=i+1;
 			r++;
 		}
 		
 	}

 	//step 4 : if any count is 0 , declare ans 0 in else part else solve :
 	if(p!=0 && q!=0 && r!=0)
 	{

 		//step 5 : the number of teams formed is minimum of (p,q,r) got by function;
 		int small = minimum(p,q,r);
 		cout<<small<<endl;
 		for(int i=0;i<small;i++)
 		{
 			cout<<programming[i]<<" "<<mathematics[i]<<" "<<physical[i]<<endl;
 		}

 	}
 	else
 		cout<<"0";
 	return 0;
 	
 	
 	


 }
