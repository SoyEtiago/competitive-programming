// https://codeforces.com/problemset/problem/228/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);cin.tie(0);
    auto setShoes = unordered_set<int>(4);
    int ans = 0;
    int i = 4;
    while(i--) {
        int a;
        cin >> a;
        if(setShoes.count(a)) {
            ans++;
        }
        setShoes.insert(a);
    }
    cout << ans << "\n";
    return 0;
}
