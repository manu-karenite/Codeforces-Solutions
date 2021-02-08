/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/

include <bits/stdc++.h>
using namespace std;
 
int main()
{
    char str[101];
    char final_str[10000];
    cin>>str;
    char c;
    int i,k;
    for( i=0,k=0;str[i]!='\0';i++)
    {
        c=str[i];
        //cout<<c<<endl;
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='y' || c=='A' || c=='E' || c=='I' ||c=='O' || c=='U'|| c=='Y')
        {
            
        }
        else
        {
            if((int)c>=65 && (int)c<=90)
                c=(char)((int)c+32);
            final_str[k++]='.';
            final_str[k++]=c;
        }
        
    }
    final_str[k]='\0';
    cout<<final_str;
 
 
 
 
 
 
}
