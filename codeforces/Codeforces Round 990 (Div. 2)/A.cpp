#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int tt;
    cin >> tt;
    while(tt--) {
        int n;
        int ans = 0;
        int sum = 0;
        cin >> n;
        for(int i = 0; i < n; i++) {
            int a = 0;
            cin >> a;
            sum+=a;
            if(sum == 1) {ans++;}
            else {
                double raizSum = sqrt(sum);
                if(sum % 2 != 0) {
                    if((raizSum - ((int)raizSum)) > 0) {continue;}
                    else {ans++;}
                }
                
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
