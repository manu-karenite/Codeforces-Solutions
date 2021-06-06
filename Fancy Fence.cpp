
/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;
    
    while(test--)
    {
        double ang,intPart;
        cin>>ang;
        
        double ratio = 180/ang;
        
        double z = 2*ratio/(ratio-1);
        
        double fractPart = modf(z, &intPart);
        
        
        
       
        if(fractPart>0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
            
           
    }
     return 0;
}
