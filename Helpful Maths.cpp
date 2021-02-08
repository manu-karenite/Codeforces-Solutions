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
    string word;
    cin>>word;
    int length=word.size();
    //int arr_num[100];
    int one=0;
    int two=0;
    int three=0;
 
    for (int i=0 ; i<length ; i=i+2)
 
    {
    if (word[i]=='1')
        one++;
    else if (word[i]=='2')
       two ++;
    else
        three++;
 
    }
    string onee="1";
    string twoo="2";
    string threee="3";
    string add="+";
    string res="";
    string res1="";
    string res2="";
    string u="";
    //cout<<one<<two<<three<<endl;
 
 
    for (int j=1;j<=one;j++)
        res=res + onee + add ;
    for (int k=1;k<=two;k++)
        res1=res1+twoo+add ;
    for (int l=1;l<=three;l++)
        res2=res2+threee+add ;
    u=res+res1+res2;
 
    //cout<<u;
    int ulen=u.size();
    string fin="";
    for (int e=0;e<(ulen-1);e++)
        fin=fin+u[e];
    cout<<fin;
 
 
    return 0;
 
 
 
 
 
 
 
 
 
 
}
