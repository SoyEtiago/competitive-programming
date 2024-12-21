#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);cin.tie(0);
    int n;
    cin >> n;
    int xT = 0; int yT = 0; int zT = 0;
    while(n--) {
        int x, y, z;
        cin >> x >> y >> z;
        xT+= x;
        yT+= y;
        zT+= z;
    }
    if(xT == 0 && yT == 0 && zT == 0) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}
