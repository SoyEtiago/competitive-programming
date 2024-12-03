//https://codeforces.com/contest/2039/problem/A

#include <bits/stdc++.h>

using namespace std;


int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> result;
        for(int i = 0; i <= n; i++){
            if(i == 0) result.push_back(2);
            else {
                result.push_back((i+1)+i);
            }
        }

        for(int i = 0; i < result.size() - 1; i++) {
            cout << result[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
