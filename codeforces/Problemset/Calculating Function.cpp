#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);cin.tie(0);
    long long n;
    cin >> n;
    cout << (n % 2 == 0 ? (long long)n/2 : (long long) -(n+1)/2) << "\n";
    return 0;
}
