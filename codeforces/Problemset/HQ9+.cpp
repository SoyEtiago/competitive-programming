

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);cin.tie(0);
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == 'H' or s[i] == 'Q' or s[i] == '9') {
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
    return 0;
}
