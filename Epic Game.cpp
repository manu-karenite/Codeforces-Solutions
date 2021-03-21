/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/

#include <bits/stdc++.h>
using namespace std;

int whoWins(int simon , int antisimon , int n , int chance)
{
	if (chance%2==1 && n==0)
		return 1;
	else if (chance%2==0 && n==0)
		return 0;
	//base case done;
	int x;
	if(chance%2==1)
	{
		//simon's chance
		x=(__gcd(simon,n));
		n=n-x;

	}
	else
	{
		x=(__gcd(antisimon,n));;
		n=n-x;
	}
	//cout<<n<<endl;
	return whoWins(simon,antisimon,n,++chance);


}


 int main()
 {
 	int simon , antisimon , n , chance=1;
 	cin>>simon>>antisimon>>n;
 	
 	int result;
 	result = whoWins(simon , antisimon , n,chance);
 	cout<<result;
 	return 0;
 }
