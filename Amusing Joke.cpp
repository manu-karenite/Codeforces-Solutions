/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
char host_name[101];
char guest_name[101];
char mixed_word[203];
cin>>host_name;
cin>>guest_name;
cin>>mixed_word;

int host_length ,guest_length , total_length,mixed_length;
host_length=strlen(host_name);
guest_length=strlen(guest_name);
total_length= host_length+guest_length;
mixed_length=strlen(mixed_word);

int count=0;
char c;
char d;

//---------------------------------------------
int a=0;
while(a<host_length)
{
c=host_name[a];
for(int j=0;j<mixed_length;j++)
{
d=mixed_word[j];
if(d==c)
{	
	mixed_word[j]='{';
	count++;
	break;
}
}
a++;


}

//------------------------------------------------------
a=0;
while(a<guest_length)
{
c=guest_name[a];
for(int j=0;j<mixed_length;j++)
{
d=mixed_word[j];
if(d==c)
{	
	mixed_word[j]='{';
	count++;
	break;
}
}
a++;


}
if(count!=total_length)
{
cout<<"NO";
}
else
{
//count=total_length
int count_rem=0;
for(int i=0;i<mixed_length;i++)
{
	if(mixed_word[i]!='{')
		count_rem++;

}
if(count_rem==0)
	cout<<"YES";
else
	cout<<"NO";


}

return 0;

}
