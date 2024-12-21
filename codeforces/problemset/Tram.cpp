#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);cin.tie(0);
    int n;
    cin >> n;
    int total = 0;
    int ans = 0;
    while(n--) {
        int a, b;
        cin >> a >> b;
        total -= a;
        total += b;
        ans = max(ans, total);
    }
    cout << ans << "\n";
    return 0;
}
