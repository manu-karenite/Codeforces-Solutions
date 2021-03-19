/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/

#include <bits/stdc++.h>
using namespace std;


string generateString(string input)
{
	int len = input.size();
	if(len==0)
		return "";
	if (len==1)
		return input;
	if(len==2)
		return input;

	string smallProblem = generateString(input.substr(2));
	
	return (input[0]+smallProblem);
}
int main()
{
	int test;
	cin>>test;
	string input;
	for(int i=0;i<test;i++)
	{
		cin>>input;
		//cout<<input.substr(2)<<endl;
		string output=generateString(input);
		cout<<output<<endl;



	}
	return 0;

}
