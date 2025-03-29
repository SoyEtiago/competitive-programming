#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int TT;
    cin >> TT;
    while (TT--) {
        long long n, k;
        cin >> n >> k;
        long long ans;
        if (n % 2 == 0) {
            ans = ceil((long double)n / (long double) (k - 1));
        } else {
            ans = 1 + ceil((long double)(n - k) /(long double) (k - 1));
        }
        cout << ans << "\n";
    }
    return 0;
}