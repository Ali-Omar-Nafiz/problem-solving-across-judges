#include <bits/stdc++.h>
using namespace std;

const int mod = 32768;

#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define endl '\n'
#define int long long

void solve() {
    vector < int > dist(mod, 0);
    vector < bool > vis(mod);
    vector < vector < int > > adjList(mod);
    for (int i = 0; i < mod; i++) {
        adjList[(i + 1) % mod].push_back(i);
        adjList[(i * 2) % mod].push_back(i);
    }
    queue < int > q;
    vis[0] = true;
    q.push(0);
    dist[0] = 0;
    while (!q.empty()) {
        int f = q.front();
        q.pop();
        for (auto x: adjList[f]) {
            if (!vis[x]) {
                dist[x] = dist[f] + 1;
                vis[x] = true;
                q.push(x);
            }
        }
    }
    int n;
    cin >> n;
    while (n--) {
        int x;
        cin >> x;
        cout << dist[x] << " ";
    }
    cout << endl;
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