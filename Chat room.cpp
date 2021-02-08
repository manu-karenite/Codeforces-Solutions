/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/


#include <bits/stdc++.h>
using namespace std;
 
 
 
int main()
{
    char str[101];
    cin>>str;
 
    //to find length
    int count=0;
    for(int i=0;str[i]!='\0';i++)
        ++count;
 
 
    int a=-1 , b=-1 , c1=-1 , d=-1 ,e=-1;
    char c;
    for(int j=0;j<count;j++)
    {
        c=str[j];// c contains letter by letter;
        if(c=='h')
            {a=j;break;}
    }
    if(a==-1)  // if it contains any index , move to check presence of letter 'e'
        cout<<"NO";
    else
    {
        for(int k=a+1;k<count;k++)
        {
            c=str[k]; // checking for e
            if(c=='e')
                {b=k;break;}
 
            
        }
        if(b==-1)
            cout<<"NO";
        else
        {
           for(int l=b+1;l<count;l++)
        {
            c=str[l]; // checking for e
            if(c=='l')
                {c1=l;break;}
 
            
        }  
        if(c1==-1)
            cout<<"NO";
        else
        {
            for(int m=c1+1;m<count;m++)
        {
            c=str[m]; // checking for e
            if(c=='l')
                {d=m;break;}
 
 
            
        }
        if(d==-1)
            cout<<"NO";
        else
        {
            for(int p=d+1;p<count;p++)
        {
            c=str[p]; // checking for e
            if(c=='o')
                {e=p;break;}
 
 
            
        }
        if(e==-1)
            cout<<"NO";
        else
            cout<<"YES";
 
 
        }
 
        }
   }
 
 
 
    }
 
 
    }
