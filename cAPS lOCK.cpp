/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/


#include <bits/stdc++.h>
using namespace std;
int main() {
 
    char arr[101];
    cin>>arr;
    int ascii;
    char a;
    
    int len=strlen(arr);
    if(len==1)
    {
        a=arr[0];
        ascii=a;
        if(ascii>96)
           { ascii-=32;
        arr[0]=(char)ascii;}
        else
            { ascii+=32;
        arr[0]=(char)ascii;}
        cout<<arr;
 
    }
    else{
    //int ascii;
    int flag=1;
    int sum=0;
    int i=0;
    int first_ascii=(int)arr[0];
    if(first_ascii>96)//first is caps , then all should be capsON
    {
        i=1;
        while(i<len)
        {
            ascii=(int)arr[i];
            if(ascii>96)
            {
                flag=0;break;
            }
            i++;
 
        }
        if(flag==1) // except first , all are caps , need to change
        {
            i=0;
            while(i<len)
        {
             a=arr[i];
             ascii=a;
            //cout<<ascii<<endl;
             if(ascii<97)
             {
                ascii=ascii+32;
                arr[i]=(char)ascii;
             }
            i++;
 
        }
    
            a=arr[0];
            ascii=a;
            ascii-=32;
            arr[0]=(char)ascii;
            
        }
        //cout<<arr;
 
    }
    else
    {
 
        flag=0;
         i=1;
        while(i<len)
        {
            ascii=(int)arr[i];
            if(ascii>96)
            {
                flag=1;break;
            }
            i++;
 
        }
 
        if(flag==0)
        {
 
 
            i=0;
            while(i<len)
        {
             a=arr[i];
             ascii=a;
            //cout<<ascii<<endl;
             if(ascii<97)
             {
                ascii=ascii+32;
                arr[i]=(char)ascii;
             }
            i++;
 
        }
        //cout<<arr;
        }
 
 
    }
    cout<<arr;}
    return 0;
}
 
 
 
    
 
 
