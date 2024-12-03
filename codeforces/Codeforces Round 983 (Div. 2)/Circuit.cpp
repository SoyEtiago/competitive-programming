//https://codeforces.com/contest/2032/problem/A

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;


int main () {
    int t = 0;

    cin >> t;
    while(t--) {
        int n = 0;
        int countON = 0;
        cin >> n;
        for(int i = 0; i < 2*n; i++){
            int a = 0;
            cin >> a;
            if (a == 1) countON++;
        }
        cout << (countON % 2 == 0 ? 0 : 1) << " " << min(countON, 2 * n - countON) << endl;

    }
}
