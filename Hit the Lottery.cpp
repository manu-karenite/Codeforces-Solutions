 /*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/


#include <iostream>
using namespace std;
#define hundred 100
#define one 1
#define twenty 20
#define ten 10
#define five 5


int main() {
	long long int n;
	scanf("%lld",&n);
	int count=0;
	
	while(n>=hundred)
	{
	    count++;
	    n-=hundred;
	}
	while(n>=twenty)
	{
	    count++;
	    n-=twenty;
	}
	while(n>=ten)
	{
	    count++;
	    n-=ten;
	}
	while(n>=five)
	{
	    count++;
	    n-=five;
	}
	while(n>=one)
	{
	    count++;
	    n-=one;
	}
	printf("%d",count);
	return 0;
	
}
