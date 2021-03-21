/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/

#include <bits/stdc++.h>
using namespace std;

inline int minimum(int x , int y)
{
	if(x<y)
		return x;
	else
		return y;

}
 int main()
 {
 	//step 1 : read r and b r->red b->blue
 	int *r = new int;
 	int *b = new int;
 	cin>>*r>>*b;

 	//step 2 : getting minimum of r and b for Fashion Trends using inline function
 	int *mini = new int;
 	*mini = minimum (*r,*b);

 	//step 3 : decrementing r and b by mini to remove used socks

 	*r = (*r)-(*mini);
 	*b = (*b) - (*mini);

 	//step 4 : making pairs of same type of socks

 	int *pair = new int((*r/2)+(*b/2));
 	cout<<*mini<<" "<<*pair;

 	//step 5 : freeing up the memory
 	
 	delete pair;
 	delete mini;
 	delete b;
 	delete r;

 	//step 6: end the function
 	return 0; 
 }
