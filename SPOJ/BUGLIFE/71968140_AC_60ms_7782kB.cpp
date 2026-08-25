#include <bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

vector < vector < int > > adjList;
vector < bool > vis;

bool bfs(int s) {
    queue < int > q;
    map < int, int > color;
    q.push(s);
    color[s] = 1;
    vis[s] = true;
    while (!q.empty()) {
        int f = q.front();
        q.pop();
        for (auto x: adjList[f]) {
            if (!vis[x]) {
                vis[x] = true;
                color[x] = color[f] ^ 1;
                q.push(x);
            } else {
                if (color[f] == color[x]) {
                    return false;
                }
            }
        }
    }
    return true;
}

void solve() {
    int n, m;
    cin  >> n >> m;
    adjList.assign(n + 1, {});
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    vis.assign(n + 1, false);
    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            if (!bfs(i)) {
                cout << "Suspicious bugs found!" << endl;
                return;
            }
        }
    }
    cout << "No suspicious bugs found!" << endl;
}

signed main() {
    FAST_IO;
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cout << "Scenario #" << i << ":\n";
        solve();
    }
    return 0;
}