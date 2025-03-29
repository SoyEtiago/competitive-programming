#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> p, m, s;
    
    for (int i = 0; i < n; ++i) {
        int t;
        cin >> t;
        if (t == 1) {
            p.push_back(i + 1);
        } else if (t == 2) {
            m.push_back(i + 1);
        } else {
            s.push_back(i + 1);
        }
    }
    
    int mt = min({p.size(), m.size(), s.size()});
    cout << mt << "\n";
    
    for (int i = 0; i < mt; ++i) {
        cout << p[i] << " " << m[i] << " " << s[i] << "\n";
    }
    
    return 0;
}