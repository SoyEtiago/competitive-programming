#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;

        vector<int> a(m);
        for (int i = 0; i < m; ++i) {
            cin >> a[i];
        }

        unordered_set<int> known_questions;
        for (int i = 0; i < k; ++i) {
            int q;
            cin >> q;
            known_questions.insert(q);
        }
        int known_count = known_questions.size();
        string result(m, '0');

        for (int i = 0; i < m; ++i) {
            if (known_questions.find(a[i]) == known_questions.end() && known_count == n - 1) {
                result[i] = '1';
            }
            else if (known_questions.find(a[i]) != known_questions.end() && known_count == n) {
                result[i] = '1';
            }
        }

        cout << result << '\n';
    }

    return 0;
}
