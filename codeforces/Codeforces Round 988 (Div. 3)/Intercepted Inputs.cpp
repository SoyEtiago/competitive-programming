#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);cin.tie(0);
    
    int T;
    cin >> T;
    while(T--) {
		int k;
		cin >> k;
		set<int> values;
		bool printed = false;
		for(int i = 0; i < k; i++) {
			int x;
			cin >> x;
			if((k-2)%x == 0 && values.count((k-2)/x) && !printed) {
				cout << x << " " << (k-2)/x << "\n";
				printed = true;
			}
			values.insert(x);
		}
	}
    return 0;
}
