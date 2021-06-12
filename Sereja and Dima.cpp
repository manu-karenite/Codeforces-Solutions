/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/

#include <bits/stdc++.h>

using namespace std;

#define loop(i,a,b) for(int i=a;i<b;i++)




int main()
{
            int n;
            cin>>n;
            int arr[n];
            loop(i,0,n)
                cin>>arr[i];
                
                int s =0 , d=0;
                int p=0;
                int q = n-1;
                int chance=0;
                while(p<=q)
                {
                    int high = max(arr[p],arr[q]);
                    if(high==arr[p])
                        p++;
                    if(high==arr[q])q--;
                    
                    if(chance%2==0)
                        s+=high;
                    else
                        d+=high;
                        chance++;
                }
                cout<<s<<" "<<d<<endl;
                return 0;
}
