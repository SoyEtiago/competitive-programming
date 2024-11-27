#include <bits/stdc++.h>
using namespace std;
 
int main() {
  ios::sync_with_stdio(0);cin.tie(0);
  
  int ntest = 0;
  cin >> ntest;
 
  while(ntest--) {
    long long x = 0LL, y = 0LL;
    cin >> x >> y;
     long long max_num = max(x, y); 
    // Manhattan distance d1(p,q) = |p1-q1| + |p2-q2|
    // Even max_num => cord : (max_num, 1)
    // Odd max_num => cord : (1, max_num)
    if(max_num % 2 == 0) cout << (max_num*max_num) - (abs(x-max_num) + abs(y-1LL)) << "\n";
    else cout << (max_num*max_num) - (abs(x-1LL) + abs(y-max_num)) << "\n";
  }
 
  return 0;
}