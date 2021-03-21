/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/

#include <bits/stdc++.h>
using namespace std;

 int main()
 {
 	int x;
 	cin>>x;
 	int z = x%4;
 	if(x==0)
 		z=1;
 	else if(z==1)
 		z=8;
 	else if (z==2)
 		z=4;
 	else if (z==3)
 		z=2;
 	else
 		z=6;
 	cout<<z;
 	return 0;

 }
