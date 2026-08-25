#include <bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

vector < bool > visited;
int cnt = 0;

void dfs(vector < vector < int > > &adjList, int u, int k, int m, vector < int > &cat) {
    visited[u] = true;
    if (k > m) {
        return;
    }
    for (auto v: adjList[u]) {
        if (!visited[v]) {
            if (cat[v]) {
                dfs(adjList, v, k + 1, m, cat);
            } else {
                dfs(adjList, v, 0, m, cat);
            }
        }
    }
    if (adjList[u].size() == 1 && u != 1) {
        cnt++;
    }
}

void solve() {
    int n, m;
    cin >> n >> m;
    vector < int > cat(n + 1);
    for (int i = 0; i < n; i++) {
        cin >> cat[i + 1];
    }
    vector < vector < int > > adjList(n + 1);
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    visited.assign(n + 1, false);
    int k;
    if (cat[1]) {
        k = 1;
    } else {
        k = 0;
    }
    dfs(adjList, 1, k, m, cat);
    cout << cnt << endl;
}
//
signed main() {
    FAST_IO;
    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++) {
        solve();
    }
}