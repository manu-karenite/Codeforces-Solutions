 /*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/


#include <bits/stdc++.h>
 
using namespace std;
 
 
 
 
 
int main() {
long long int n;
cin>>n;
long long int m;
long long int a,b,rem,leftout;
int i=0;
while(i<n)
{
cin>>a>>b;
rem=a%b;
leftout=b-rem;
if(rem==0)
    cout<<rem<<endl;
else
    cout<<leftout<<endl;
i++;
 
 
}
return 0;
}
