#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define endl '\n'
#define int long long

vector < int > bfs(vector < vector < int > > &adjList, int s) {
  int n = adjList.size();
  vector < bool > vis(n);
  vector < int > parent(n);
  queue < int > q;
  q.push(s);
  vis[s] = true;
  parent[s] = -1;
  while (!q.empty()) {
    int f = q.front();
    for (auto x: adjList[f]) {
      if (!vis[x]) {
        parent[x] = f;
        vis[x] = true;
        q.push(x);
      }
    }
    q.pop();
  }
  return parent;
}

void solve() {
  int n, m;
  cin >> n >> m;
  vector < vector < int > > adjList(n + 1);
  int s = 1, d = n;
  for (int i = 1; i <= m; i++) {
    int u, v;
    cin >> u >> v;
    adjList[u].push_back(v);
    adjList[v].push_back(u);
  }
  vector < int > parent = bfs(adjList, s);
  vector < int > path;
  int tmp = d;
  while (parent[d] != -1) {
    path.push_back(d);
    if (parent[d] == 0) {
      cout << "IMPOSSIBLE" << endl;
      return;
    }
    d = parent[d];
  }
  path.push_back(s);
  cout << path.size() << endl;
  for (int i = path.size() - 1; i >= 0; i--) {
    cout << path[i] << " ";
  }
  cout << endl;
}

signed main() {
    FAST_IO;
    solve();
    return 0;
}