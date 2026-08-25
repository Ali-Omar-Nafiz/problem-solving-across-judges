#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define endl '\n'
#define int long long

vector < bool > vis;
vector < vector < int > > adjList;

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
    vis.assign(n + 1, false);
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    vector < int > ans;
    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            dfs(i);
            ans.push_back(i);
        }
    }
    cout << ans.size() - 1 << endl;
    for (int i = 1; i < ans.size(); i++) {
        cout << ans[i] << " " << ans[i - 1] << endl;
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