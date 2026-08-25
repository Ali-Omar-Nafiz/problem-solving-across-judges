#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define endl '\n'
#define int long long

vector < vector < int > > adjList(20001);
vector < bool > vis(20001);

int bfs(int s) {
    queue < int > q;
    vector < int > color(20001);
    int cnt1 = 0, cnt2 = 0;
    q.push(s);
    vis[s] = true;
    color[s] = 1;
    cnt1++;
    while (!q.empty()) {
        int f = q.front();
        q.pop();
        for (auto x: adjList[f]) {
            if (!vis[x]) {
                vis[x] = true;
                color[x] = color[f] ^ 1ll;
                color[x] == 1 ? cnt1++ : cnt2++;
                q.push(x);
            }
        }
    }
    return max(cnt1, cnt2);
}

void solve() {
    int n;
    cin >> n;
    adjList.assign(20001, {});
    vis.assign(20001, false);
    for (int i = 0; i < n; i++)  {
        int u, v;
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    int ans = 0;
    for (int i = 0; i < 20001; i++) {
        if (!vis[i] && !adjList[i].empty()) {
            ans += bfs(i);
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