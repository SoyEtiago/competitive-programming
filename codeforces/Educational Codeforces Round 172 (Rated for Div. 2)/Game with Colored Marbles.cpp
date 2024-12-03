//https://codeforces.com/contest/2042/problem/B

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);cin.tie(0);
  int tt;
  cin >> tt;
  while(tt--) {
    map<int, int> mp;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int c;
        cin >> c;
        mp[c]+=1;
    }
     map<int, int>::iterator it = mp.begin();
    
    int unique = 0;

    // Iterate through the map and print the elements
    while (it != mp.end()) {
        // cout << "Key: " << it->first
        //      << ", Value: " << it->second << endl;
        if(it->second == 1) unique++;
        ++it;
    }
        cout << (mp.size()-unique)+(ceil((double)unique/(double)2)*2) << "\n";
  }
  return 0;
}
