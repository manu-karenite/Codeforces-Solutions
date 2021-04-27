/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/

#include <iostream>
using namespace std;
 
long long int sumDigits(long long int z)
{
    
  if(z==0)
    return 0;
//base case
 
    long long int smallProblem = sumDigits(z/10);
    long long int x = (z%10 + smallProblem);
    return x ;
    
    
}
 
 
int main()
{
    int test;
    cin>>test;
    long long int entry;
    while(test--)
    {
        cin>>entry;
        if(entry%2050!=0)
            cout<<"-1";
        else
        {
            long long int x = entry/2050;
            cout<<sumDigits(x);
        }
        
        cout<<endl;
      
    }
}
