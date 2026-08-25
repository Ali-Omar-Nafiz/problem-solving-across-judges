#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define endl '\n'
#define int long long

map < int, vector < int > > adjList;
map < int, bool > vis;
map < int, int > color;

void bfs(int s) {
    queue < int > q;
    q.push(s);
    vis[s] = true;
    color[s] = 0;
    while (!q.empty()) {
        int f = q.front();
        q.pop();
        for (auto x: adjList[f]) {
            if (!vis[x]) {
                vis[x] = true;
                color[x] = color[f] ^ 1ll;
                q.push(x);
            }
        }
    }
}

void solve() {
    int n;
    cin >> n;
    adjList.clear();
    for (int i = 0; i < n; i++)  {
        int u, v;
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    vis.clear();
    int ans = 0;
    for (auto [x, y]: adjList) {
        if (vis[x] == 0) {
            color.clear();
            bfs(x);
            int cnt1 = 0, cnt2 = 0;
            for (auto [x, y]: color) {
                if (y == 0) {
                    cnt1++;
                } else {
                    cnt2++;
                }
            }
            ans += max(cnt1, cnt2);
        }
    }
    cout << ans << endl;
}

signed main() {
    FAST_IO;
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
      cout << "Case " << i << ": ";
      solve();
    }
    return 0;
}