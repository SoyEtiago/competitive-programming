// https://codeforces.com/gym/105505/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);cin.tie(0);
    string s;
    cin >> s;
    int actualChar = s[s.size()-1]+1;
    int total = 0;
    for(int i = s.size()-1; i >= 0; i--) {
        if(s[i] < actualChar) {
            actualChar = s[i];
            total++;
        }
        else break;
    }
    cout << s.size()-total;
    return 0;
}
