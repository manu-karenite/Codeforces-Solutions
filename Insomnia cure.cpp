 /*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/


#include  <bits/stdc++.h>
using namespace std;

int main()
{
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    int arr[d];
    for(int i=1;i<=d;i++)
        arr[i-1]=i;
    //cout<<arr[d/2];
    //elements done;
    for(int i=k-1;i<d;i=i+k)
    {
        
            arr[i]=-1;


    }
    for(int j=l-1;j<d;j+=l)
    {
        if(arr[j]!=-1)
            arr[j]=-1;
    }
    for(int p=m-1;p<d;p+=m)
    {
        if(arr[p]!=-1)
            arr[p]=-1;
    }
    for(int q=n-1;q<d;q+=n)
    {
        if(arr[q]!=-1)
            arr[q]=-1;
    }
    int count=0;
    for(int i=0;i<d;i++)
    {
        if(arr[i]!=-1)
            count++;}
    cout<<d-count;
    return 0;

}
