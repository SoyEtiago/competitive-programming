#include <bits/stdc++.h>
using namespace std;

int cnt = 0;
const int n = (int) 1e5 + 9;
vector<int> g[n];
int color[n];
bool vis[n];
vector<int> route;


void dfs(int u) {
  vis[u] = true;
  color[u] = cnt;
  for (auto v: g[u]) {
    if (!vis[v]) {
      dfs(v);
    }
  }
}

void findComp(int x) {
  for(int i = 0; i < x; i++) {
    if(!vis[i]) {
      route.push_back(i+1);
      cnt++;
      dfs(i);
    }
  }
}

int main() {
    ios::sync_with_stdio(0);cin.tie(0);
    int n; int m;
    cin >> n >> m;

    for(int i = 0; i < m; i++) {
      int a; int b;
      cin >> a >> b;
      a--; b--;
      g[a].push_back(b);
      g[b].push_back(a);
    }

    findComp(n);

    cout << cnt - 1 << endl;

    for(int i = 1; i < cnt; i++) {
      cout << route[0] << " " << route[i] << endl;
    }

    return 0;
}