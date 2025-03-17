// https://codeforces.com/problemset/problem/59/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);cin.tie(0);
    string s;
    
    int up = 0;
    int low = 0;

    cin >> s;

    for (auto c : s) {
        if(c >= 97) low++;
        else up++;
    }

    if(low >= up) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    } else {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }

    cout << s << "\n";
    return 0;
}
