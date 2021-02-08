/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/


#include<iostream>
using namespace std;
int main()
{
    int n,sum1=0,sum2=0,sum3=0,sum4=0,min_t=0;
    cin>>n;
    int A[n];
    for(int i=0; i<n; i++)
    {
        cin>>A[i];
        if(A[i]==1)
        {
            sum1=sum1+1;
        }
        if(A[i]==2)
        {
            sum2=sum2+1;
        }
        if(A[i]==3)
        {
            sum3=sum3+1;
        }
        if(A[i]==4)
        {
            sum4=sum4+1;
        }
    }
        min_t=sum4;
        while(sum1!=0 && sum3!=0)
        {
            sum3=sum3-1;
            sum1=sum1-1;
            min_t=min_t+1;
        }
        if(sum1==0 && sum3!=0)
        {
            min_t=min_t+sum3;
            sum3=0;
        }
        min_t=min_t+sum2/2;
        if(sum2%2!=0)
        {
           if(sum1<=2)
           {
               min_t=min_t+1;
               sum1=0;
              
           }
           else
           {
               sum1=sum1-2;
               sum2=0;
               min_t=min_t+1;
           }
        }
        if(sum1!=0)
           {
              min_t=min_t+sum1/4;
              if(sum1%4!=0)
              {
                  min_t=min_t+1;
              }
           }
            cout<<min_t;
 
 
}
