 /*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    //creating runtime memories in heap to avoid chances of memory crash
    int *n = new int;
    cin>>*n;
    int *arr = new int[*n];
    int *entry =new int;
    for(int i=0;i<*n;i++)
    {
        cin>>*entry;
        *(arr+i)=*entry%2;
    }
   
    int i;

    int *index_one = new int;
    *index_one=-1;
    int *index_zero =new int;
    *index_zero=-1;
    int count_one=0;
    int count_zero=0;

    for( i=0;i<*n;i++)
    {
        if(*(arr+i)==1)
            {*index_one=i;count_one++;}
        else
            {*index_zero=i;count_zero++;}

    }
    if(count_one==1)
    {
        cout<<*index_one+1;
    }
    else
        cout<<*index_zero+1;
    
     delete index_zero;
     delete index_one;
     delete entry;
     delete []arr;
     delete n;
     return 0;

}
