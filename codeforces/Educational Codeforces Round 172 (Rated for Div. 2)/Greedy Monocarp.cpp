#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0);cin.tie(0);
  int tt;
  cin >> tt;
  while(tt--) {
    ll n, k;
    ll total = 0;
    cin >> n >> k;
    vector<ll> v(n);
    for(int i = 0; i < n; i++){
        ll a;
        cin >> a;
        total+=a;
        v.push_back(a);
    }
    if(total <= k){ cout<< k-total << "\n";}
    else {
        sort(v.begin(), v.end(), greater<>());
        ll partialSum = 0;
        for(int i = 0; i<n; i++){
            partialSum += v[i];
            if(partialSum > k){ cout << k-(partialSum-v[i]) << "\n"; break;}
        }
    }
  }
  return 0;
}
