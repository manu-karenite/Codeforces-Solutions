/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/


#include <bits/stdc++.h>
using namespace std;
int findAns(int z) {



int j=1;
int sum =0;
int count=0;
while(sum<=z)
{
	count++;
	sum = sum + (j*(j+1))/2;
	j++;

}
return --count;

}


int main()
{
	int n;
	cin>>n;
	int l=0;
	int ans = findAns(n);
	cout<<ans;
	return 0;
}
