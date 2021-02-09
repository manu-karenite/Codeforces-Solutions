/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/

bool onPlayground(int x , int y , int z ,int host_uniform[],int guest_uniform[] )
{
    //xth and yth teams are here to play on playground  z
    bool ans;
    int uniform_x=host_uniform[x];
    int uniform_y=guest_uniform[y];
    if(uniform_x==uniform_y && z==x)
        ans=true;
    else if (uniform_x==uniform_y && z!=x)
        ans=true;
    else if (uniform_x!=uniform_y && z==x)
        ans=false;
    else if (uniform_x!=uniform_y && z!=x)
        ans=true;
   
    
    return ans;





}

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;
    int host_uniform[n]={};
    int guest_uniform[n]={};
    int entry_host_uniform;
    int entry_guest_uniform;
    for(int i=0;i<n;i++)
    {
        cin>>entry_host_uniform>>entry_guest_uniform;
        host_uniform[i]=entry_host_uniform;
        guest_uniform[i]=entry_guest_uniform;
    }
    //data is fed up in the arrays
    int count=0;
    bool result;

    for(int p=0;p<n-1;p++)
    {
        for(int q=p+1;q<n;q++)
        {
            //every team can be accessed using p,q 
            //on p and q playground respectively
            result=onPlayground(p,q,p,host_uniform,guest_uniform);
            //cout<<result<<endl;
            if(result==1)
                count++;
            result=onPlayground(q,p,q,host_uniform,guest_uniform);
            //cout<<result<<endl;
            if(result==1)
                count++;





        }
    }

cout<<count;
return 0;



}
