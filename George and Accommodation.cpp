/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/


#include <iostream>
#include <string>
using namespace std;
int main()
{
    int room;
    cin>>room;
    int resul=0;
 
    for (int i=0;i<room;i++)
    {
        int occ ;
        int cap;
        cin>>occ>>cap;
        if ((cap-occ)>=2)
            resul=resul+1;
        else
            resul=resul+0;
 
 
    }
    cout<<resul;
    return 0;
}
