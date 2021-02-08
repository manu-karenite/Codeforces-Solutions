/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/


#include <bits/stdc++.h>
 
using namespace std;

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int max=a*(b+c);
    if((a+b+c)>max)
        max=(a+b+c);
    if((a+(b*c))>max)
        max=(a+(b*c));
    if(((a*b)+c)>max)
        max=((a*b)+c);
    if(a*b*c>max)
        max=a*b*c;
    if(((a+b)*c)>max)
        max=((a+b)*c);
    cout<<max;
    return 0;
    
 
}
