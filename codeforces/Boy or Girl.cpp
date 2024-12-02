#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);cin.tie(0);
  string s;
  cin >> s;
  set<char> a;
  for(char c: s) a.insert(c);
  if(a.size() % 2 == 0) cout << "CHAT WITH HER!\n";
  else cout << "IGNORE HIM!\n";
  return 0;
}
