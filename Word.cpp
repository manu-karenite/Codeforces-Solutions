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
 
 int big =0;
 int small=0;
 char c;
 int ascii=0;
 
 for(int i=0;word[i]!='\0';i++)
 {
    c=word[i];
    ascii=(int)c;
    if(ascii>=65 && ascii<=90)
        ++big;
    else
        ++small;
 }
 
if(small<big)
{
for(int i=0;word[i]!='\0';i++)
{
    c=word[i];
    if((int)c >96)
    {
    ascii=(int)c;
    ascii=ascii-32;
    c=char(ascii);
    word[i]=c;}
 
}
 
 
}
else
{
 
for(int i=0;word[i]!='\0';i++)
{
    c=word[i];
    if((int)c <=90){
    ascii=(int)c;
    ascii=ascii+32;
    c=char(ascii);
    word[i]=c;}
 
}
 
 
}
 
cout<<word;
return 0;
 
 
}
 
 
