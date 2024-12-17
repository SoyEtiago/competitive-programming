#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);cin.tie(0);
  int t;
  cin >> t;
  while (t--) {
        long long m, a, b, c;
        cin >> m >> a >> b >> c;


        long long row1_seats = min(m, a);
        long long row2_seats = min(m, b);

        long long remaining_row1 = m - row1_seats;
        long long remaining_row2 = m - row2_seats;

        long long no_preference_used = min(c, remaining_row1 + remaining_row2);

        long long total_seated = row1_seats + row2_seats + no_preference_used;

        cout << total_seated << "\n";
    }
  return 0;
}
