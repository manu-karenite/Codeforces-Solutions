/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/


#include <bits/stdc++.h>
using namespace std;
 
int main() {
    char a[1000000];
    cin.getline(a,1000000);
    int len1=strlen(a);
    //cout<<len1;
    int i=0;
    int freq[256];
    int count=0;
    char letter;
    int ascii;
    while(i<len1)
    {
        letter=a[i];
        ascii=letter;
        if(freq[ascii]==0)
        {
            freq[ascii]++;
            count++;
        }
        else
            freq[ascii]++;
        i++;
 
    }
    if(count%2==0)
        cout<<"CHAT WITH HER!";
    else
        cout<<"IGNORE HIM!";
    return 0;
}
 
