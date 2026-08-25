#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define endl '\n'
#define int long long

vector < vector < int > > adjList;
vector < bool > vis;

void dfs(int cur) {
    vis[cur] = true;
    for (auto x: adjList[cur]) {
        if (!vis[x]) {
            dfs(x);
        }
    }
}

void solve() {
    int n, m;
    cin >> n >> m;
    adjList.assign(n + 1, {});
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    if (m != (n - 1)) {
        cout << "NO" << endl;
        return;
    }
    vis.assign(n + 1, false);
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            cnt++;
            dfs(i);
        }
    }
    if (cnt != 1) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }
}

signed main() {
    FAST_IO;
    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++) {
      // cout << "Case " << i << ": \n";
      solve();
    }
    return 0;
}