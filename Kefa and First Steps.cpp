/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/


#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    //int arr[n];
    int i=1;
    int x;
    cin>>x;
    int y;
    int count=1;
    int count2=1;
    while(i<n)
    {
        cin>>y;
        if(y>=x)
            {x=y;count2++;i++;continue;}
        if(count2>count)
            count=count2;
        x=y;
        i++;
        count2=1;
        //cout<<count<<"****"<<endl;
 
 
    }
    if(count2>count)
        count=count2;
    cout<<count;
    return 0;
 
 
}
 
