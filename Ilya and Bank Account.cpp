/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/

#include <bits/stdc++.h>
using namespace std;
                                  

int main()
{
int money;
cin>>money;
int result=money;
if(money<0)
{
int duplicate_money=money;
int last_digit=(int)(fabs(duplicate_money%10));

duplicate_money/=10;
int second_last_digit = (int)(fabs(duplicate_money%10));

duplicate_money/=10;

int x=((money/100)*10)-last_digit;
int y=((money/100)*10)-second_last_digit;

(x>y)?result=x:result=y;
}
cout<<result;
return 0;
}
