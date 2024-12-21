// https://codeforces.com/problemset/problem/705/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);cin.tie(0);
    int n; 
    cin >> n;
    string ans = "";
    for(int i = 1; i <= n; i++) {
        if(i%2 == 0) {
            ans+="I love";
        } else {
            ans+="I hate";
        }

        if(i == n) {
            ans+=" it";
        } else {
            ans+=" that ";
        }
    }
    cout << ans << "\n";
    return 0;
}
