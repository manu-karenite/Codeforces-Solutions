/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/


#include <bits/stdc++.h>
using namespace std;

int main() {
    char str1[1000];
    char str2[1000];
    cin.getline(str1,1000);
    int len1=strlen(str1);
    cin.getline(str2,1000);
    int len2=strlen(str2);
 
    //input done
    bool answer;
    if(len1!=len2)
        answer=0;
    else
    {
        int i=0;
        int j=len2-1;
        char temp;
        while(i<j)
        {
            temp=str2[i];
            str2[i]=str2[j];
            str2[j]=temp;
            i++;
            j--;
 
        }
        if((strcmp(str1,str2))==0)
            answer=1;
        else
            answer=0;
    }
    if(answer==0)
        cout<<"NO";
    else
        cout<<"YES";
    return 0;
}
    //cin>>a>>b;
 
