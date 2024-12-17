// https://codeforces.com/contest/271/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);cin.tie(0);
    string s = "";
    cin >> s;
    bool distinct = false;
    while(!distinct) {
        s = to_string(stoi(s) + (int)1);
        if(s[0] != s[1] && s[0] != s[2] && s[0] != s[3] && s[1] != s[2] &&  s[1] != s[3] && s[2] != s[3]) {
            distinct = true;
            break;
        }
    }
    cout << s <<"\n";
}

