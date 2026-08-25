#include <bits/stdc++.h>
 
using namespace std;
using ll = long long;
 
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

vector < int > parent, dist;
vector < vector < int > > adjList;

void bfs(int s) {
    int n = adjList.size();
    vector < bool > vis;
    parent.assign(n, -1);
    dist.assign(n, -1);
    vis.assign(n, false);
    queue < int > q;
    q.push(s);
    dist[s] = 0;
    parent[s] = -1;
    vis[s] = true;
    while (!q.empty()) {
        int f = q.front();
        q.pop();
        for (auto x: adjList[f]) {
            if (!vis[x]) {
                vis[x] = true;
                dist[x] = dist[f] + 1;
                parent[x] = f;
                q.push(x);
            }
        }
    }
}
 
void solve() {
    int n, m;
    cin >> n >> m;
    adjList.assign(n, {});
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    int s, d;
    cin >> s >> d;
    bfs(s);
    vector < int > ans(n);
    for (int i = 0; i < n; i++) {
        ans[i] = dist[i];
    }
    int mx = INT_MIN;
    for (int i = 0; i < n; i++) {
        bfs(i);
        ans[i] += dist[d];
        mx = max(mx, ans[i]);
    }
    cout << mx << endl;
}
 
signed main() {
    FAST_IO;
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cout << "Case " << i << ": ";
        solve();
    }
}