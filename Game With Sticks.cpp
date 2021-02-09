 /*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/


#include <bits/stdc++.h>
using namespace std;

int main()
{
     int n , m;
    scanf("%d %d",&n,&m);
    int count=0;
    
    while(((n*m)-(n+m-1))>=0 && n>0 && m>0)
    {
     count++;
     n--;
     m--;
    }
    if (count%2==1)
    printf("Akshat");
    else
    printf("Malvika");
    
    return 0;
}
