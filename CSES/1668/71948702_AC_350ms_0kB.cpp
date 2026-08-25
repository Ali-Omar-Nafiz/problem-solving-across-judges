#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define endl '\n'
#define int long long

vector < vector < int > > adjList;
vector < int > team;
vector < bool > vis;

bool bfs(int s) {
    map < int, int > color;
    queue < int > q;
    int cnt1 = 0, cnt0 = 0;
    q.push(s);
    color[s] = 1;
    vis[s] = true;
    cnt1 = 1;
    while (!q.empty()) {
        int f = q.front();
        q.pop();
        for (auto x: adjList[f]) {
            if (!vis[x]) {
                vis[x] = true;
                color[x] = color[f] ^ 1;
                if (color[x] == 0) {
                    cnt0++;
                } else {
                    cnt1++;
                }
                q.push(x);
            } else {
                if (color[f] == color[x]) {
                    return false;
                }
            }
        }
    }
    for (auto [x, y]: color) {
        if (y == 1) {
            team[x] = 1;
        } else {
            team[x] = 2;
        }
    }
    return true;
}

void solve() {
    int n, m;
    cin >> n >> m;
    adjList.assign(n + 1, {});
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        adjList[x].push_back(y);
        adjList[y].push_back(x);
    }
    vis.assign(n + 1, false);
    team.assign(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            bool chk = bfs(i);
            if (!chk) {
                cout << "IMPOSSIBLE" << endl;
                return;
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        cout << team[i] << " ";
    }
    cout << endl;
}

signed main() {
    FAST_IO;
    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++) {
      // cout << "Case " << i << ": ";
      solve();
    }
    return 0;
}