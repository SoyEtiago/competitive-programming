#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v(3);

    for(auto& x: v) cin >> x;

    sort(v.begin(), v.end());

    cout << ((v[1]-v[0]) + (v[2]- v[1])) << "\n";
    
    return 0;
}