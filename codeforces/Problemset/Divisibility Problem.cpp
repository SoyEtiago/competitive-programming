// https://codeforces.com/problemset/problem/1328/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);cin.tie(0);
    int t; cin >> t;

    while(t--) {
        int a, b;
        cin >> a >> b;
        cout << (a%b == 0 ? 0 : (b-a%b)) << "\n";
    }
    return 0;
}
