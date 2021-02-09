 /*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/


#include <bits/stdc++.h>
using namespace std;



int main()
{
 char a[201];
 cin>>a;
 char b[201];
 
 int z = strlen(a);
 int i=0;
 int k=0;
 char c,d,e;


 while(i<z)
 {
c=a[i]; // character at focus
d=a[i+1];
e=a[i+2];
if(c=='W' && d=='U' && e =='B' )
{
    if(b[k-1]!=(char)32)
        b[k++]=(char)32;
    i=i+3;
    continue;


}
else
{
b[k++]=c;


}
i++;

 }
 b[k]='\0';
 
 if(b[0]==(char)32)
 {
    for(int m=1;b[m]!='\0';m++)
        cout<<b[m];


 }
 else
 {
  for(int m=0;b[m]!='\0';m++)
        cout<<b[m];  
 }
 
return 0;

}



    
