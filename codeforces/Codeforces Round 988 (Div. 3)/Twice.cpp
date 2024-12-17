#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int count = 0;
        int n;
        cin >> n;
        unordered_map<int, int> m(n);
        while(n--) {
            int a;
            cin >> a;
            m[a]++;
        }

        for(auto c : m) {
            count += c.second / 2;
        }
        cout << count << "\n";
    }
    return 0;
}
