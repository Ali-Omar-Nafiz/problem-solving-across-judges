#include <bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

vector < bool > visited;
vector < int > order;

void dfs(vector < vector < int > > &adjList, int u) {
    visited[u] = true;
    order.push_back(u);
    for (auto v: adjList[u]) {
        if (!visited[v]) {
            dfs(adjList, v);
        }
    }
}

void solve() {
    int n, m;
    cin >> n >> m;
    vector < pair < int, int > > v(n + 1);
    for (int i = 1; i <= n; i++) {
        int x, y;
        cin >> x >> y;
        v[i] = {x, y};
    }
    vector < vector < int > > adjList(n + 1);
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        adjList[x].push_back(y);
        adjList[y].push_back(x);
    }
    visited.assign(n + 1, false);
    int ans = INT_MAX;
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            dfs(adjList, i);
            if (order.size() == 0) {
                continue;
            }
            int mxX = INT_MIN, mxY = INT_MIN;
            int mnX = INT_MAX, mnY = INT_MAX;
            for (int i = 0; i < order.size(); i++) {
                mxX = max(mxX, v[order[i]].first);
                mnX = min(mnX, v[order[i]].first);
                mxY = max(mxY, v[order[i]].second);
                mnY = min(mnY, v[order[i]].second);
            }
            int cur = 2 * (abs(mxX - mnX) + abs(mxY - mnY));
            ans = min(cur, ans);
        }
        order.clear();
    }
    cout << ans << endl;
}

signed main() {
    FAST_IO;
    int t = 1;
    freopen("fenceplan.in", "r", stdin);
    freopen("fenceplan.out", "w", stdout);
    // cin >> t;
    for (int i = 1; i <= t; i++) {
        // cout << "#TestCase: " << i << endl;
        solve();
    }
}