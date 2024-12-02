#include <bits/stdc++.h>
using namespace std;

int lcm (int a, int b) {
    return a / gcd(a, b) * b;
}

int main() {
  ios::sync_with_stdio(0);cin.tie(0);
  int tt;
  cin >> tt;
  while(tt--) {
    int a = 1, b = 1;
    cin >> a >> b;
    int ans = 0;
    ans = lcm(a, b);
    cout << ans << "\n";
  }
  return 0;
}