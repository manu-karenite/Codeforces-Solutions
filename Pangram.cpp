/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
int n;
cin>>n;
char word[n];
cin>>word;
int freq[256]={};
char a;
for(int i=0;i<n;i++){
	a=word[i];
	if(freq[(int)a]==0)
	freq[(int)a]++;

}

int count=0;
int value;
int value_complement;
for(int z=65;z<=90;z++)
{
value=freq[z];
value_complement=freq[z+32];
if(value>0 || value_complement>0)
	count++;



}
if(count==26)
	cout<<"YES";
else
	cout<<"NO";
return 0;
}
