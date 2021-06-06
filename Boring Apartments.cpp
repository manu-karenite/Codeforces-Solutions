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
        int x;
        cin>>x;
        
        int number =0;
        int fDig =0;
        while(x>0)
        {
            number++;
               if(x<=9)
                fDig = x;
            x = x/10;
         
        }
       
    
        int sum = (fDig-1)*10;
        if(number==1)
            sum+=1;
        else if(number==2)
            sum+=3;
        else if(number==3)
            sum+=6;
        else
            sum+=10;
        cout<<sum<<endl;    
   
    }
}
