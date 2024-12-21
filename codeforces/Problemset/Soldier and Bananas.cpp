// https://codeforces.com/problemset/problem/546/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);cin.tie(0);
    int k, n, w;
    cin >> k >> n >> w;
    int total = ((2*k + ((w-1)*k))*w)/2;
    cout << max(0, total-n) << "\n";
    return 0;
}
