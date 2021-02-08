/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/


#include <bits/stdc++.h>
using namespace std;
 
int main()
{
int numberOfMagnets;
cin>>numberOfMagnets;
int firstMagnet;
cin>>firstMagnet;
int entry;
int numberOfGroups=1;
for(int i=1;i<numberOfMagnets;i++)
{
cin>>entry;
if(entry!=firstMagnet)
{
numberOfGroups++;
firstMagnet=entry;
}
}
cout<<numberOfGroups;
return 0;
}
