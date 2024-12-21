// https://codeforces.com/problemset/problem/1030/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);cin.tie(0);
    int n, a; int total = 0;
    cin >> n;
    while(n--) {a = 0;cin >> a; total+= a;}
    cout << (total ? "HARD\n" : "EASY\n");
    return 0;
}
