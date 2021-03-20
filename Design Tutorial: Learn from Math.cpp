/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/

#include <iostream>
using namespace std;
 class Calculation{
 	private : 
 		int entry;
 		int a;
 		int b;
 	public :
 		Calculation(int x)
 		{
 			entry=x;
 		}

 		void generateComposite()
 		{
 			int *y=new int;
 			if(entry%2==0)
 			{
 				*y=entry-6;
 				cout<<6<<" "<<*y;
 			}
 			else
 			{
 				*y=entry-9;
 				cout<<9<<" "<<*y;
 			}
 			delete y;
 		}

 };

 int main()
 {
 	int *t = new int;
 	cin>>*t;
 	Calculation object(*t);
 	object.generateComposite();
 	delete t;
 	return 0;
 }
