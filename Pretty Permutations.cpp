#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        
       int arr[n];
       for(int i=1;i<=n;i++)
        arr[i-1]=i;
        
    if(n%2==0)
    {
        for(int i=0;i<n-1;i=i+2)
        {
            cout<<arr[i+1]<<" "<<arr[i]<<" ";
        }
        cout<<endl;
    }
    else
    {
        for(int i=0;i<n-2;i+=2)
        {
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
        int temp = arr[n-2];
        arr[n-2]=arr[n-1];
        arr[n-1]=temp;
        
        for(int i=0;i<n;i=i+1)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    }
    return 0;
}
