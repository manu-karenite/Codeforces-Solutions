 /*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/


#include <bits/stdc++.h>
using namespace std;



int main()
{
 int n;
 cin>>n;
 int p;
 cin>>p;
 int arr1[p];
 for(int i=0;i<p;i++)
    cin>>arr1[i];
int q;
cin>>q;
int arr2[q];
for(int i=0;i<q;i++)
    cin>>arr2[i];
int total_arr[p+q];
int k=0;
while(k<p)
    {total_arr[k]=arr1[k];
    k++;
}
while(k<p+q)
{
    total_arr[k]=arr2[k-p];
    k++;
}
sort(total_arr,total_arr+p+q);
int level=1;

int j=0;
int flag=0;
while(j<p+q)
{
    if(level==total_arr[j] && level<n)
    {
        level++;
        j++;
        continue;
    }
    else if(level==total_arr[j] && level==n)
    {
        level++;
        j++;
        flag=1;
        break;
    }
    j++;




}
if(flag==0)
cout<<"Oh, my keyboard!";
else
cout<<"I become the guy.";
return 0;
}



    
