// https://codeforces.com/problemset/problem/200/B

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);cin.tie(0);
    int n;
    cin >> n;
    int total = n*100;
    int fraction = 0;
    for(int i = 0; i < n; i++) {
        int p;
        cin >> p;
        fraction += p;
    }
    cout << ((double) ((double)fraction / (double) total) * 100) << setprecision(4) << "\n";
    return 0;
}
