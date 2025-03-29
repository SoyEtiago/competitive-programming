#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);cin.tie(0);
    int T;
    cin >> T;
    while(T--) {
        string s;
        int n = 0;
        int k = 0;
        cin >> n >> k >> s;
        string ans = "NO\n";
        if(s[n-1] > s[0] and k == 0) {
            ans = "YES\n";
        } else if (k > 0){
            if(s[n-1] > s[0]) {
                ans = "YES\n";
            } else {
                for(int i = 1; i < n-1; i++) {
                    for(int j = n-1; j >= 1; j--) {
                        if(s[i] < s[j]) {
                            ans = "YES\n";
                            break;
                        }
                    }
                }
            }
            
        }
        cout << ans;
    }
    return 0;
}