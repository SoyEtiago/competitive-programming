//https://codeforces.com/contest/2034/problem/B

#include <bits/stdc++.h>
using namespace std;


int main() {
  ios::sync_with_stdio(0);cin.tie(0);
  int count = 0;
  int tt =1;
  cin >> tt;

  while(tt--) {
    int n = 1, m = 1, k = 1;
    cin >> n >> m >> k;
    string s;
    cin >> s;
    int ans = 0;
    int countM = 0;
    for(int i = 0; i < n;i++) {
        countM++;
        if(s[i] == '1') {countM = 0;}
        if(countM == m) {
                s.replace(i, k, string(k, '1'));
                ans++;
                countM=0;
        }
        
    }
    cout << ans << "\n";
  }
}