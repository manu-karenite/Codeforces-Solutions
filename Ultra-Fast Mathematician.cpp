/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/


#include <bits/stdc++.h>
using namespace std;
 
int main()
{
char binaryNumber1[101];
char binaryNumber2[101];
cin>>binaryNumber1;
cin>>binaryNumber2;
char a , b;
 
int binaryLength=strlen(binaryNumber1);
char finalBinary[101];
int i;
for(i=0;i<binaryLength;i++)
{
a=binaryNumber1[i];
b=binaryNumber2[i];
if(a==b)
finalBinary[i]='0';
else
finalBinary[i]='1';
 
}
finalBinary[i]='\0';
cout<<finalBinary;
return 0;
}
