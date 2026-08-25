#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define endl '\n'
#define int long long

vector < vector < int > > adjList;
vector < int > dist;

void bfs(int cur) {
    queue < int > q;
    q.push(cur);
    dist[cur] = 0;
    while (!q.empty()) {
        int f = q.front();
        q.pop();
        for (auto x: adjList[f]) {
            if (dist[x] == -1) {
                dist[x] = dist[f] + 1;
                q.push(x);
            }
        }
    }
}

void solve() {
    int n, m;
    cin >> n >> m;
    adjList.assign(n + 1, {});
    dist.assign(n + 1, -1);
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        adjList[x].push_back(y);
        adjList[y].push_back(x);
    }
    bfs(1);
    int cnt1 = 0, cnt2 = 0;
    for (int i = 1; i <= n; i++) {
        if (dist[i] % 2 == 0) {
            cnt1++;
        } else {
            cnt2++;
        }
    }
    cout << min(cnt1, cnt2) << endl;
    for (int i = 1; i <= n; i++) {
        if (cnt1 < cnt2) {
            if (dist[i] % 2 == 0) {
                cout << i << " ";
            }
        } else {
            if (dist[i] & 1) {
                cout << i << " ";
            }
        }
    }
    cout << endl;
}

signed main() {
    FAST_IO;
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
      // cout << "Case " << i << ": ";
      solve();
    }
    return 0;
}