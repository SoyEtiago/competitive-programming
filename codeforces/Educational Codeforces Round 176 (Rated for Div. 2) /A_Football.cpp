#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    int n = s.size();
    int sum1 = 0;
    int sum0 = 0;
    for(int i = 0; i < n; i++) {
            if(sum1 == 7) {
                break;
            } else {
                if(s[i] == '1') {
                    sum1 = 1;
                    for(int j = i+1; j < n; j++) {
                        if(s[j] == '1') {
                            sum1++;
                        } else {
                            break;
                        }
                    }
                }
                
            }
    }

    for(int i = 0; i < n; i++) {
        if(sum0 == 7) {
            break;
        } else {
            if(s[i] == '0') {
                sum0 = 1;
                for(int j = i+1; j < n; j++) {
                    if(s[j] == '0') {
                        sum0++;
                    } else {
                        break;
                    }
                }
            }
            
        }
    }
    if(max(sum1, sum0) == 7) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    return 0;
}
