/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int test;
    cin>>test;
    int yes=0;
    int no=0;
 
    for(int i=0;i<test;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int res=a+b+c;
        if (res>=2)
            yes++;
        else
            no++;
    }
    cout<<yes;
    return 0;
}
