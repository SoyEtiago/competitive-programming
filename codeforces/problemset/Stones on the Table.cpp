#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);cin.tie(0);
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0;
    for(int i = 0; i < n; i++) {
        if(s[i] == s[i+1]) {s[i+1] = s[i];ans++;}
    }
    cout << ans << "\n";
    return 0;
}
