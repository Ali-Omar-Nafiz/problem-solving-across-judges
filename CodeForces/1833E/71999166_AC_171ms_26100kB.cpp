#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define endl '\n'
#define int long long

vector < set < int > > adjList;
vector < bool > vis;

int bfs(int s) {
    queue < int > q;
    vector < int > cur;
    q.push(s);
    cur.push_back(s);
    vis[s] = true;
    while (!q.empty()) {
        int f = q.front();
        q.pop();
        for (auto x: adjList[f]) {
            if (!vis[x]) {
                vis[x] = true;
                q.push(x);
                cur.push_back(x);
            }
        }
    }
    bool chk = true;
    for (auto x: cur) {
        if (adjList[x].size() != 2) {
            chk = false;
        }
    }
    return chk;
}

void solve() {
    int n;
    cin >> n;
    adjList.assign(n + 1, {});
    vis.assign(n + 1, false);
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        adjList[x].insert(i);
        adjList[i].insert(x);
    }
    int mx = 0, mn = 0;
    int add = 0;
    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            mx++;
            if (bfs(i)) {
                mn++;
            } else {
                add = 1;
            }
        }
    }
    mn += add;
    cout << mn << " " << mx << endl;
}

signed main() {
    FAST_IO;
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
      // cout << "Case " << i << ": \n";
      solve();
    }
    return 0;
}