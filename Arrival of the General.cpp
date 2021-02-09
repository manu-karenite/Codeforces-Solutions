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
    int *arr1=new int[*n];
    int *entry = new int;

    for(int i=0;i<*n;i++)
    {
        cin>>*entry;
        *(arr+i)=*entry;
        *(arr1+i)=*entry;

    }
    sort(arr,arr+*n);
    /*for(int j=0;j<*n;j++)
    {
        cout<<*(arr+j)<<" ";
    }
    */
    //cout<<endl;
    reverse(arr,arr+*n);
    /*for(int j=0;j<*n;j++)
    {
        cout<<*(arr+j)<<" ";
    }*/

    int *first_person = new int;
    *first_person=*(arr);
    int *last_person = new int ;
    *last_person=*(arr+*n-1);
    //cout<<endl;
    //cout<<*first_person<<"     "<<*last_person;
    int *count= new int;
    *count=0;
    //arr contains sorted and reversed data but arr1 contains original array;

    int *high_index = new int;
    *high_index=-1;
    int *low_index = new int;
    *low_index=-1;

    //cout<<endl;
    for(int k=0;k<*n;k++)
    {
        //if(*(arr1+k)==*first_person)
            //*high_index=k;
        if (*(arr1+k)==*last_person)
            *low_index=k;
    }
    for(int k=0;k<*n;k++)
    {
        if(*(arr1+k)==*first_person)
            {*high_index=k;
                break;}
    }

    //cout<<*high_index<<"*******"<<*low_index;

    if(*high_index<*low_index )
    {
        //22 44 11 33
        *count=*high_index-0 + *n-1 - *low_index;

    }
    else if (*high_index>*low_index)
    {
        *count = *high_index;
        *low_index=*low_index+1;
        *count+=*n-1-*low_index;



    }
    //cout<<endl;
    cout<<*count;

    delete low_index;
    delete high_index;
    delete count;
    delete last_person;
    delete first_person;
    delete []arr1;
    delete []arr;
    delete n;
    return 0;
    



}
