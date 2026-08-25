#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define endl '\n'
#define int long long

vector < vector < int > > adjList;
vector < bool > vis;

int dfs(int s) {
    vis[s] = true;
    int ret = 0;
    for (auto x: adjList[s]) {
        if (!vis[x]) {
            ret = max(ret, dfs(x));
        }
    }
    return ret + 1;
}

void solve() {
    int n;
    cin >> n;
    adjList.assign(n + 1, {});
    vector < int > root;
    for (int i = 1; i <= n; i++) {
        int x, y;
        cin >> x;
        if (x != -1) {
            adjList[x].push_back(i);
            adjList[i].push_back(x);
        } else {
            root.push_back(i);
        }
    }
    int ans = INT_MIN;
    vis.assign(n + 1, false);
    for (auto x: root) {
        ans = max(ans, dfs(x));
    }
    cout << ans << endl;
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