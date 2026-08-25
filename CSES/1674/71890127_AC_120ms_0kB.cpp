#include <bits/stdc++.h>
 
using namespace std;
 
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long
 
vector < bool > visited;
vector < int > ans;
 
void dfs(vector < vector < int > > &adjList, int u) {
    visited[u] = true;
    for (auto v: adjList[u]) {
        if (!visited[v]) {
            dfs(adjList, v);
            ans[u] += ans[v] + 1;
        }
    }
}
 
void solve() {
    int n;
    cin >> n;
    vector < vector < int > > adjList(n + 1);
    for (int v = 2; v <= n; v++) {
        int u;
        cin >> u;
        adjList[u].push_back(v);
    }
    visited.assign(n + 1, false);
    ans.assign(n + 1, 0);
    dfs(adjList, 1);
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
        solve();
    }
}