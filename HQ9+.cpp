/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/

#include <bits/stdc++.h>
using namespace std;
 

int main()
{
char word[101];
cin>>word;
int flag=0;
int i=0;
while(word[i]!='\0')
{
switch(word[i])
{
case 'H' :
case 'Q' :
case '9' : {flag++;break;}
 
}
if(flag>0)
break;
i++;
 
 
}
if(flag==0)
cout<<"NO";
else
cout<<"YES";
return 0;
}

