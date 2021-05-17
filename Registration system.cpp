/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/

Question : https://codeforces.com/contest/1525/problem/A

#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;



void solve (string word , unordered_map<string,int> & map)
{
    int x = map.count(word);
    if(x==0)
    {
        map[word]=1;
        cout<<"OK"<<endl;

    }
    else
    {
        //exists already
        //get the count of the map
        int val = map[word];
        string number = to_string(val);
        cout<<word+number<<endl;
        map[word]=val+1;
    }
} 

int main()
{
    int test;
    cin>>test;

    string word;

    unordered_map<string , int> map;


    while(test--)
    {
        cin>>word;
        solve(word , map);

    }

}







