/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/

#include <iostream>
using namespace std;

int main()
{
    int test;
    cin>>test;
    int n , k1 , k2 , w , b;
    
    while(test--)
    {
        cin>>n>>k1>>k2;
        cin>>w>>b;
        
        int possible_white = -1;
        int sumOfk1k2 = k1 +k2;
        possible_white = sumOfk1k2/2;
        
        int possible_black = -1;
        int productOfk1k2 = n*2 ;
        int possible_black_domino = productOfk1k2 - sumOfk1k2;
        possible_black = possible_black_domino/2;
        
        if((w <= possible_white ) && (b <= possible_black))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
