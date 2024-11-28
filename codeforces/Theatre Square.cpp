#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);cin.tie(0);
  
  long long n = 1LL, m = 1LL, a = 1LL;

  cin >> n >> m >> a;
  long double na = ((long double)n/(long double)a);
  long double ma = ((long double)m/(long double)a);
  cout << (long long)(ceil(na) * ceil(ma)) << "\n";
}
