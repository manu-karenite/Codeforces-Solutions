/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/

#include <iostream>
using namespace std;
 class Calculation{
 	private : 
 		int n;
 		int m;
 	public :
 		Calculation(int x , int y)
 		{
 			n=x;
 			m=y;
 		}

 		void generateComposite()
 		{
 			int count,x;
 			for (count=0,x =n ;x>0;x--)
 			{
 				count++;
 				if(count%m==0)
 					x++;

 			}
 			cout<<count;
 		}

 };

 int main()
 {
 	int *n = new int;
 	int *m = new int;
 	cin>>*n>>*m;
 	Calculation object(*n , *m);
 	object.generateComposite();
 	delete m;
 	delete n;
 	return 0;
 }
