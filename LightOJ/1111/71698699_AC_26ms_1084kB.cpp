#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define endl '\n'
#define int long long

vector < vector < int > > adjList;
vector < int > visCnt;
vector < bool > vis;

void dfs(int cur) {
    vis[cur] = true;
    visCnt[cur]++;
    for (auto x: adjList[cur]) {
        if (!vis[x]) {
            dfs(x);
        }
    }
}

void solve() {
    int k, n, m;
    cin >> k >> n >> m;
    vector < int > ppl;
    for (int i = 0; i < k; i++) {
        int x;
        cin >> x;
        ppl.push_back(x);
    }
    adjList.assign(n + 1, {});
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adjList[u].push_back(v);
    }
    visCnt.assign(n + 1, 0);
    for (auto x: ppl) {
        vis.assign(n + 1, false);
        dfs(x);
    }
    cout << count(visCnt.begin(), visCnt.end(), k) << endl;
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