#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);cin.tie(0);
  int t;
  cin >> t;

    while (t--) {
        string a;
        cin >> a;

        string b = "";

        for (auto it = a.rbegin(); it != a.rend(); ++it) {
            char c = *it;
            if (c == 'p') {
                b += 'q';
            } else if (c == 'q') {
                b += 'p';
            } else { // c == 'w'
                b += 'w';
            }
        }

        cout << b << endl;
    }
  return 0;
}
