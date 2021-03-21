/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/

#include<bits/stdc++.h>
using namespace std;
void solve(){

    int n ;
    scanf("%d",&n);
    long long sum = 0;
    for(int i = 0 ; i < n; i++){
        int x ;
        scanf("%d",&x);
        sum += x ;
    }
    sum = ceil((double)sum/n);
    printf("%lld\n",sum);

}
int main() {
    int t ;
    scanf("%d",&t);
    while(t--)
            solve() ;

    return 0;
}
