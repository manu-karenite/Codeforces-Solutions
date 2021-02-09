 /*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int *p=new int;
    cin>>*p;
    
    char shape[50];
    char first;
    int sum=0;


    while((*p)--)
    {
        cin>>shape;
        first=shape[0];
        switch(first)
        {
            case 'T' : {sum+=4;break;}
            case 'C' : {sum+=6;break;}
            case 'O' : {sum+=8;break;}
            case 'D' : {sum+=12;break;}
            case 'I' : {sum+=20;break;}
        }


    }
    cout<<sum;
    return 0;
    delete p;


}
