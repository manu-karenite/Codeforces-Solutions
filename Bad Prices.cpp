/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/

#include <bits/stdc++.h>

using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); i++)

int main() {
    int t;
    cin >> t;
    forn(tt, t) {
        int n;
        cin >> n;
        vector<int> a(n);
        forn(i, n)
            cin >> a[i];
        int ans = 0;
        int right_min = INT_MAX;
        for (int i = n -  1; i >= 0; i--) {
            if (a[i] > right_min)
                ans++;
            right_min = min(right_min, a[i]);
        }
        cout << ans << endl;
    }
}
