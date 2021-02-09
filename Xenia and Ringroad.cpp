 /*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/


#include <bits/stdc++.h>

using namespace std;





int main() {
long long int n;
cin>>n;
long long int m;
cin>>m;
long long int start=1;
long long int end=n;
long long int entry;
long long int j=0;
long long int time=0;
while(j<m)
{
    cin>>entry;
    if(entry<start)
        time+=(end-start)+entry;
    else if(entry==start)
        time+=0;
    else if(entry>start)
        time+=(entry-start);
    start=entry;




    j++;
}
cout<<time;
return 0;
}

 
