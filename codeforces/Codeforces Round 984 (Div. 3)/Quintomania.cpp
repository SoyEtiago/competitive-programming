#include <bits/stdc++.h>

using namespace std;
typedef long long ll;


int main () {
    int t = 0;
    cin >> t;

    while(t--) {
        int n = 0;
        cin >> n;

        vector<int> v;
        while(n--) {
            int a = 0;
            cin >> a;
            v.push_back(a);
        }
        bool goodMelody = true;
        for(int i = 0; i < v.size()-1; i++){
            int interva = abs(v[i]-v[i+1]);
            if(interva != 5 && interva != 7){
                 goodMelody = false;
                 break;
            }
        }
        cout << (goodMelody == true ? "YES": "NO") << endl;
    }
}