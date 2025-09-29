#include <bits/stdc++.h>
using namespace std;
 
const int N = (int) 10e5;
vector<int> g[N];
bool vis[N];
int sub[N];
 
void dfs(int v) {
    vis[v] = true;
    for(auto u : g[v]) {
        if(!vis[u]) {
            dfs(u);
            sub[v] += sub[u] + 1;
        }
    }
}
 
 
int main() {
    ios::sync_with_stdio(0);cin.tie(0);
    int n;
    cin >> n;
    for(int i = 2; i <= n; i++) {
        int a;
        cin >> a;
        g[a].push_back(i);
    }
 
    fill(sub, sub+N, 0);
 
     dfs(1);
 
    for(int j = 1; j <= n; j++) {
       cout << sub[j] << " ";
    }
 
    cout << endl;
 
    return 0;
}