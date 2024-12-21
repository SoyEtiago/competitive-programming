// https://codeforces.com/problemset/problem/158/B

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);cin.tie(0);
    int n = 1;
	cin >> n;
    vector<int> v(n);
    while(n--) {
		int x = 1;
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(), v.end(), greater<>());
	
	int ans = 0;
	for(int i = 0; i <= n; i++) {
		int sum = 0;
		sum += v[i];
		if(sum == 4) {
			ans++;
			continue;
		} else {
			for(int j = i+1; i < n; j++) {
				sum += v[j];
				if(sum == 4) {i=j;break;}
			}
			ans++;
		}
	}
	cout << ans << "\n";
}
