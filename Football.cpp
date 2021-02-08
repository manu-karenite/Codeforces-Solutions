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
 
    string entry;
    cin>>entry;
    string res;
    int entry_len=entry.size();
    if (entry_len>=7)
    {
 
 
        for (int i=0;i<=(entry_len-6);i++)
        {
 
 
            if ((entry[i]==entry[i+1]) && (entry[i+1]==entry[i+2])&&(entry[i+2]==entry[i+3])&&(entry[i+3]==entry[i+4])&&(entry[i+4]==entry[i+5])&&(entry[i+5]==entry[i+6]))
                {
                    cout<<"YES";
                    break;
                }
            else if (i==(entry_len-6))
                {
                    cout<<"NO";
                    break;
                }
 
 
 
 
        }
 
        }
        else
            cout<<"NO";
 
    return 0;
}
