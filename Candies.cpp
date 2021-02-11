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
int entry;
int superscript;
int k;
for(int i=0;i<n;i++)
{
cin>>entry;
k=2;
superscript=pow(2,k);
while(entry%(superscript-1)!=0)
{
k++;
superscript=pow(2,k);

}
cout<<entry/(superscript-1)<<endl;
}
return 0;

}

