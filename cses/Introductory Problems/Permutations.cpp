#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);cin.tie(0);

  int n;
  cin >> n;

  if(n == 1) {
    cout << 1 << "\n";
  } else if( n == 2 || n == 3) {
    cout << "NO SOLUTION\n";
  } else {
    // 2 4 6 1 3 5
    for(int i = 2; i <= n; i+=2) cout << i << " ";
    for(int i = 1; i<=n; i+=2) cout << i << " ";
  }
  return 0;
}