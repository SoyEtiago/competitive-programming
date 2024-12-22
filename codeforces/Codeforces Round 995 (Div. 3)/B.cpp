#include <bits/stdc++.h>
using namespace std;

// Comparator function
bool comp(int a, int b) {
    return a > b;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n, a, b, c;
        cin >> n >> a >> b >> c;
        int group = ceil((double) n / (double)(a+b+c)) ;
        int maxDays =  group * 3;
        int totalKmDays = (a+b+c)* group;
        if(totalKmDays > n) {
            for(int i = 1; i <= 3; i++) {
                if(i == 1) {
                    if(totalKmDays - c == n) {
                        cout << maxDays - 1 << "\n";
                        break;
                    } else if(totalKmDays - c < n) {
                        cout << maxDays << "\n";
                        break;
                    }
                }
                if(i == 2) {
                    if(totalKmDays - c - b == n) {
                        cout << maxDays - 2 << "\n";
                         break;
                    } else if(totalKmDays - c - b < n) {
                        cout << maxDays - 1 << "\n";
                        break;
                    }
                }
                if(i == 3) {
                    if(totalKmDays - a - b - c == n) {
                        cout << maxDays - 3 << "\n";
                         break;
                    } else if(totalKmDays - c - b - a < n) {
                        cout << maxDays - 2 << "\n";
                        break;
                    }
                }
            }
        } else if (totalKmDays == n) {
            cout << maxDays << "\n";
        }

    }
    return 0;
}
