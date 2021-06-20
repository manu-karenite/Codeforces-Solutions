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
        int sum=0;
        int n;
        cin>>n;
        int entry;
        for(int i=0;i<n;i++)
        {
            cin>>entry;
            sum = sum+entry;
        }
        if(sum<=0)
        {
            cout<<1<<endl;
        }
        else
        {
            if(sum<n)
            {
                cout<<1<<endl;
            }
            else if((sum-n)==0)
                cout<<0<<endl;
            else
                cout<<sum-n<<endl;
        }
    }
    return 0;
}
