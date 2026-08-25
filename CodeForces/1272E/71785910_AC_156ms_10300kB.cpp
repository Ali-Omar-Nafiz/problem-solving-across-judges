#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define endl '\n'
#define int long long

vector < vector < int > > adjList;
vector < int > v;

void multiSourceBfs() {
    int n = adjList.size() - 1;
    vector < bool > vis(n + 1);
    vector < int > dist(n + 1, -1);
    queue < int > q;
    for (int i = 1; i <= n; i++) {
        if (v[i] & 1) {
            q.push(i);
            vis[i] = true;
            dist[i] = 0;
        }
    }
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
    vector < int > mainDist(n + 1);
    vis.assign(n + 1, false);
    for (int i = 1; i <= n; i++) {
        if (v[i] % 2 == 0) {
            q.push(i);
            vis[i] = true;
            mainDist[i] = dist[i];
            dist[i] = 0;
        }
    }
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
        if (v[i] & 1) {
            mainDist[i] = dist[i];
        }
    }
    for (int i = 1; i <= n; i++) {
        cout << (mainDist[i] == 0 ? -1 : mainDist[i]) << " ";
    }
    cout << endl;
}

void solve() {
    int n;
    cin >> n;
    v.assign(n + 1, 0);
    adjList.assign(n + 1, {});
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        int x = v[i];
        if (i + x <= n) {
            adjList[i + x].push_back(i);
        }
        if (i - x >= 1) {
            adjList[i - x].push_back(i);
        }
    }
    multiSourceBfs();
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