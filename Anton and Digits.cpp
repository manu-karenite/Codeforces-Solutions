/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int two , three , five , six;
    cin>>two>>three>>five>>six;
    
    int two_fifty_six = min(two , min(five,six));
    int sum = 0;
    sum += 256*two_fifty_six;
    
    two = two - two_fifty_six;
    five = five - two_fifty_six;
    six = six - two_fifty_six;
    
    int thirty_two = min(three , two);
    sum +=32*thirty_two;
    
    cout<<sum;
    return 0;
}
