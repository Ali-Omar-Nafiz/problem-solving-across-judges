#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define endl '\n'
#define int long long

vector < vector < int > > adjList;
vector < int > dist;

void dfs(int cur) {
    for (auto x: adjList[cur]) {
        if (dist[x] == -1) {
            dist[x] = dist[cur] + 1;
            dfs(x);
        }
    }
}

void solve() {
    int n;
    cin >> n;
    adjList.assign(n + 1, {});
    dist.assign(n + 1, -1);
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    dist[1] = 0;
    dfs(1);
    int node1 = 1, mxDist = 0;
    for (int i = 1; i <= n; i++) {
        if (dist[i] > mxDist) {
            node1 = i;
            mxDist = dist[i];
        }
    }
    dist.assign(n + 1, -1);
    dist[node1] = 0;
    dfs(node1);
    int node2 = node1;
    mxDist = 0;
    vector < int > ans(n + 1);
    for (int i = 1; i <= n; i++) {
        if (dist[i] > mxDist) {
            node2 = i;
            mxDist = dist[i];
        }
        ans[i] = dist[i];
    }
    dist.assign(n + 1, -1);
    dist[node2] = 0;
    dfs(node2);
    for (int i = 1; i <= n; i++) {
        ans[i] = max(ans[i], dist[i]);
    }
    for (int i = 1; i <= n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
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