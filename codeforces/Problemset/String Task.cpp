// https://codeforces.com/problemset/problem/118/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);cin.tie(0);
    string s;
    cin >> s;
    vector<char> c = {'a', 'o', 'y', 'e', 'u', 'i'};

    transform(s.begin(), s.end(), s.begin(), ::tolower);
    
    int n = s.size();

    string ans = "";
    for (int i = 0; i < n; i++) {
        bool b = false;
        for (auto y : c) {
            if(s[i] == y) b = true; 
        }
        if(!b) {
            ans =  ans + '.' + s[i]; 
        }
    }
    cout << ans << "\n";
    return 0;
}
