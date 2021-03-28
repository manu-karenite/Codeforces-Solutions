/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int *arr=new int[4];

    for(int i=0;i<4;i++)
        cin>>*(arr+i);

    char *string = new char[100001];
    cin>>string;
    int *leng=new int; //for length of the string

    *leng=strlen(string);

    int *sum=new int(0);//to calculate the sum

    int *j=new int(0);
    char *letter = new char;
    while((*j)<(*leng))
    {
        *letter=*(string+*j);
        
        if((*letter)=='1')
            *sum=(*sum) + (*arr);
        else if ((*letter)=='2')
            *sum=(*sum) + *(arr+1);
        else if ((*letter)=='3')
            *sum=(*sum) + *(arr+2);
        else
            *sum=(*sum) + *(arr+3);

        (*j)++;
    }
    cout<<*sum<<endl;

    delete letter;
    delete j;
    delete sum;
    delete leng;
    delete []string;
    delete []arr;
    
    return 0;

}
