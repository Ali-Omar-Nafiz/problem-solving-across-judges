#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define endl '\n'
#define int long long

vector < bool > vis;
vector < int> rB;

void dfs(vector < vector < int > > &adjList, int cur) {
  if (vis[cur]) {
    return;
  }
  vis[cur] = true;
  for (auto x: adjList[cur]) {
    if (!vis[x]) {
      if (rB[cur] == 0) {
        rB[x] = 1;
      }
        dfs(adjList, x);
    }
  }
}

void solve() {
  int n;
  cin >> n;
  vector < vector < int > > adjList(n + 1);
  for (int i = 1; i < n; i++) {
    int u, v;
    cin >> u >> v;
    adjList[u].push_back(v);
    adjList[v].push_back(u);
  }
  vis.assign(n + 1, false);
  rB.assign(n + 1, 0);
  dfs(adjList, 1);
  int r = count(rB.begin() + 1, rB.end(), 0);
  int b = count(rB.begin() + 1, rB.end(), 1);
  int ans = r * b;
  ans -= (n - 1);
  cout << ans << endl;
}
//
signed main() {
    FAST_IO;
    solve();

    return 0;
}