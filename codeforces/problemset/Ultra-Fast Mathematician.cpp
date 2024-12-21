// https://codeforces.com/problemset/problem/61/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);cin.tie(0);
	string n,a;
	cin >> n >> a;
	string ans ="";
	for(int i=0; i < n.length(); i++){
		if(n[i] == a[i]){
			ans+="0";}
		else {
            ans+="1";
        }
	}
    cout << ans;
    return 0;
}