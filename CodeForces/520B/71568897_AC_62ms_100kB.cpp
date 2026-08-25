#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define endl '\n'
#define int long long

void bfs(int n, int m) {
  map < int, int > vis;
  map < int, int > parent;
  queue < int > q;
  q.push(n);
  vis[n] = 1;
  while (!q.empty()) {
    int f = q.front();
    q.pop();
    if (f * 2 <= (2 * m) && !vis[f * 2]) {
      q.push(f * 2);
      parent[f * 2] = f;
      vis[f * 2] = 1;
      if (f * 2 == m) {
        break;
      }
    }
    if (f > 0 && !vis[f - 1]) {
      q.push(f - 1);
      vis[f - 1] = 1;
      parent[f - 1] = f;
      if ((f - 1) == m) {
        break;
      }
    }
  }
  int cnt = 0;
  while (m != n) {
    cnt++;
    m = parent[m];
  }
  cout << cnt << endl;
}

void solve() {
  int n, m;
  cin >> n >> m;
  bfs(n, m);
}
//
signed main() {
    FAST_IO;
    solve();
    return 0;
}