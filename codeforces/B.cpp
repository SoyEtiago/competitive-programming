#include <bits/stdc++.h>
using namespace std;


int main() {
  ios::sync_with_stdio(0);cin.tie(0);
  int count = 0;
  int tt =1;
  cin >> tt;

  while(tt--) {
    count = 0;
    int n = 1, m = 1, k = 1;
    cin >> n >> m >> k;
    string s;
    cin >> s;
    if(m == n) {
        int sValue = stoi(s);
        if(sValue == 0) {
            count++;
        }
    } else if (m==1){
        for(int i = 0; i < n; i++) {
            if(s[i] == '0') count++;
        }
    } else {
        for(int i = 0; i < ceil((double)n/(double)m); i+=m) {
            string subS = s.substr(i, m);
            int sValue = stoi(subS);
            if(sValue > 0) {
                continue;
            } else {
                string replaceS(k, '1');
                s.replace(i+m-1, k, replaceS);
                count++;
            }
        }
    }
    cout << count << "\n";
  }
}