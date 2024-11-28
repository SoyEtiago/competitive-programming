#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);cin.tie(0);

  int n = 0;
  int x = 1, y = 1;
  int ans = 0;
  while(cin >> n) {
    
    if(n == 1) {
        ans = abs(x-3) + abs(y-3);
        break;
    }
    if (y == 5) {y = 1; x++;}
    else {
        y++;
    }
    
  }
  cout << ans << "\n";
  return 0;
}
