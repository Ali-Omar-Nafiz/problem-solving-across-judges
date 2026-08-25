#include <bits/stdc++.h>
 
using namespace std;
using ll = long long;
 
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long
 
void solve() {
    int n;
    cin >> n;
    vector < vector < int > > adjList(n + 1);
    for (int i = 1; i <= n; i++) {
        int u, e;
        cin >> u >> e;
        while (e--) {
            int x;
            cin >> x;
            adjList[u].push_back(x);
        }
    }
    vector < int > dist(n + 1, -1);
    vector < bool > vis(n + 1);
    queue < int > q;
    q.push(1);
    dist[1] = 0;
    vis[1] = true;
    while (!q.empty()) {
        int f = q.front();
        q.pop();
        for (auto x: adjList[f]) {
            if (!vis[x]) {
                vis[x] = true;
                dist[x] = dist[f] + 1;
                q.push(x);
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        cout << i << " " << dist[i] << endl;
    }
}
 
signed main() {
    FAST_IO;
    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++) {
        // cout << "#TestCase: " << i << endl;
        solve();
    }
}