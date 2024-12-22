#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);cin.tie(0);
    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        vector<int> v1;
        vector<int> v2;
        for(int i = 0; i < n; i++) {
            int a;
            cin >> a;
            v1.push_back(a);
        }
        for(int j = 0; j < n; j++) {
            int b;
            cin >> b;
            v2.push_back(b);
        }
        int ans = v1[n-1];
        for(int k = n-2; k >= 0; k--) {
            int diference = v1[k] - v2[k+1];
            if( diference >= 0) {
                ans+= diference;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
