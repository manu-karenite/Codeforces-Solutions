/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/

#include <bits/stdc++.h>
using namespace std;

long long int count_same_digit(long long int L, long long int R)
{
    long long int tmp = 0, ans = 0;
  

    long long int n = log10(R) + 1;
  
    for (long long int i = 0; i < n; i++) {
  
     
        tmp = tmp * 10 + 1;
  
      
        for (long long int j = 1; j <= 9; j++) {
  
            if (L <= (tmp * j)
                && (tmp * j) <= R) {
 
                ans++;
            }
        }
    }
    return ans;
}
  

int main()
{
    int test;
    cin>>test;
    long long int n;
    while(test--)
    {
    cin>>n;
    long long int L = 1, R = n;
  
    cout << count_same_digit(L, R)
         << endl;
    }
    return 0;
}

