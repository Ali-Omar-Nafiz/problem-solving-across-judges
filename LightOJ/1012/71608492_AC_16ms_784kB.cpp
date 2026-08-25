#include <bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

vector < vector < int > > adjList;
vector < vector < char > > grid;
vector < bool > vis;

int dfs(int cur) {
    vis[cur] = true;
    int cnt = 1;
    for (auto x: adjList[cur]) {
        if (!vis[x]) {
            cnt += dfs(x);
        }
    }
    return cnt;
}

void solve() {
    int n, m;
    cin >> m >> n;
    adjList.assign(n * m + 1, {});
    vis.assign(n * m + 1, false);
    grid.assign(n + 1, vector < char > (m + 1));
    int s = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> grid[i][j];
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            int cur = ((i - 1) * m) + j;
            if (grid[i][j] == '@') {
                s = cur;
            }
            if (grid[i][j] != '#') {
                if (i != 1) {
                    if (grid[i - 1][j] != '#') {
                        adjList[cur].push_back(((i - 2) * m) + j);
                    }
                }
                if (i != n) {
                    if (grid[i + 1][j] != '#') {
                        adjList[cur].push_back((i * m) + j);
                    }
                }
                if (j != 1) {
                    if (grid[i][j - 1] != '#') {
                        adjList[cur].push_back(((i - 1) * m) + (j - 1));
                    }
                }
                if (j != m) {
                    if (grid[i][j + 1] != '#') {
                        adjList[cur].push_back(((i - 1) * m) + (j + 1));
                    }
                }
            }
        }
    }
    cout << dfs(s) << endl;
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