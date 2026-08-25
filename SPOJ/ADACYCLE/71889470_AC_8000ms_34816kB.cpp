#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define endl '\n'
#define int long long

vector < vector < int > > adjList;

void bfs(int s) {
    int n = adjList.size();
    vector < bool > vis(n, false);
    vector < int > dis(n, -1);

    queue < int > q;
    q.push(s);
    dis[s] = 0;
    vis[s] = true;

    while (!q.empty()) {
        int cur = q.front();
        q.pop();
        for (auto x: adjList[cur]) {
            if (!vis[x]) {
                vis[x] = true;
                dis[x] = dis[cur] + 1;
                q.push(x);
            } else if (x == s) {
                cout << dis[cur] + 1 << endl;
                return;
            }
        }
    }
    cout << "NO WAY" << endl;
}

void solve() {
    int n;
    cin >> n;
    adjList.assign(n, {});
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int x;
            cin >> x;
            if (x) {
                adjList[i].push_back(j);
            }
        }
    }
    for (int i = 0; i < n; i++) {
        bfs(i);
    }
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