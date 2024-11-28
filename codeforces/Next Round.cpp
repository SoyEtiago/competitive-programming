#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);cin.tie(0);
    int n = 1, k = 1;
    cin >> n >> k;
    vector<int> cont;

    while(n--){
        int a = 0;
        cin >> a;
        cont.push_back(a);
    }

    int cut = 1;
    cut = cont[k-1];

    int ans = 0;
    for(auto i : cont) {
        if(i > 0 && i>= cut) ans++;
    }

    cout << ans << "\n";
}
