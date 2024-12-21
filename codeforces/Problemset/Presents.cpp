// https://codeforces.com/problemset/problem/136/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);cin.tie(0);
    int n;
    cin >> n;
    auto giftedTo = vector<int>(n);
    for(int i = 1; i <= n; i++) {
        int p;
        cin >> p;
        giftedTo[p] = i;
    }

    for(int i = 1; i <= n; i++) {
        cout << giftedTo[i] << " ";
    }
    
    cout << "\n";
    return 0;
}
