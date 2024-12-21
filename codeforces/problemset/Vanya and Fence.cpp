// https://codeforces.com/problemset/problem/677/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);cin.tie(0);
    int n, h;
    cin >> n >> h;
    int ans = 0;
    while(n--) {
        int a;
        cin >> a;
        if(a > h) ans+=2;
        else ans++; 
    }
    cout << ans << "\n";
    return 0;
}
