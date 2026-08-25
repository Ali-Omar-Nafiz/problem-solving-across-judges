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
    q.pop();
    for (auto x: adjList[f]) {
      if (!vis[x]) {
        parent[x] = f;
        vis[x] = true;
        q.push(x);
      }
    }
  }
  return parent;
}

void solve() {
  int n, m;
  cin >> n >> m;
  vector < vector < int > > adjList(n * m + 1);
  vector < vector < char > > v(n + 1, vector < char > (m + 1));
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      cin >> v[i][j];
    }
  }
  int s, d;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      int u = ((i - 1) * m) + j;
      if (v[i][j] == 'A') {
        s = ((i - 1) * m) + j;
      } else if (v[i][j] == 'B') {
        d = ((i - 1) * m) + j;
      }
      if (v[i][j] != '#') {
        if (i != 1 && v[i - 1][j] != '#') {
          adjList[u].push_back(((i - 2) * m) + j);
        }
        if (i != n && v[i + 1][j] != '#') {
          adjList[u].push_back((i * m) + j);
        }
        if (j != 1 && v[i][j - 1] != '#') {
          adjList[u].push_back(((i - 1) * m) + j - 1);
        }
        if (j != m && v[i][j + 1] != '#') {
          adjList[u].push_back(((i - 1) * m) + j + 1);
        }
      }
    }
  }
  vector < int > parent = bfs(adjList, s);
  vector < int > path;
  int tmp = d;
  while (parent[d] != -1) {
    path.push_back(d);
    if (parent[d] == 0) {
      cout << "NO" << endl;
      return;
    }
    d = parent[d];
  }
  path.push_back(s);
  cout << "YES" << endl;
  cout << path.size() - 1 << endl;
  for (int i = path.size() - 1; i - 1 >= 0; i--) {
    if (path[i - 1] - 1 == path[i]) {
      cout << 'R';
    } else if (path[i - 1] - m == path[i]) {
      cout << 'D';
    } else if (path[i - 1] + 1 == path[i]) {
      cout << 'L';
    } else if (path[i - 1] + m == path[i]) {
      cout << 'U';
    }
    if (path[i - 1] == tmp) {
      cout << endl;
      break;
    }
  }
}
//
signed main() {
    FAST_IO;
    solve();
    return 0;
}