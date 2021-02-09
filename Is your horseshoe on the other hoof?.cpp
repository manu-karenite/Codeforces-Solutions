 /*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/


#include <bits/stdc++.h>
using namespace std;

int finder(int key ,int low , int shoes[])
{
int flag=0;
for(int k=0;k<=low;k++)
{
    if (shoes[k]==key)
        {flag=1;break;}
}
if(flag>0)
    return 1;
else
    return -1;


}

int main()
{
 int shoes[4]={0,0,0,0};
 int entry;
 int count=0;
 int i=1;
 int result;
 while(i<=4)
 {
    cin>>entry;
    result=finder(entry,i-1,shoes);
    if(result==1)
    {
        count++;
        
    }
    shoes[i-1]=entry;
    i++;

 }
 cout<<count;
 return 0;
}



    
