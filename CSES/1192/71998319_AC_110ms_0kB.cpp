#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define endl '\n'
#define int long long

const vector < int > dx = {1, -1, 0, 0};
const vector < int > dy = {0, 0, 1, -1};

vector < vector < char > > grid;
vector < vector < bool > > vis;

bool isValid(int x, int y) {
    int n = grid.size();
    int m = grid[0].size();
    if (x >= 0 && x < n && y >= 0 && y < m) {
        return true;
    }
    return false;
}

void dfs(int x, int y) {
    vis[x][y] = true;
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i], ny = y + dy[i];
        if (isValid(nx, ny) && grid[nx][ny] == '.' && !vis[nx][ny]) {
            dfs(nx, ny);
        }
    }
}

void solve() {
    int n, m;
    cin >> n >> m;
    grid.assign(n, vector < char > (m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }
    vis.assign(n, vector < bool > (m, false));
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == '.' && !vis[i][j]) {
                cnt++;
                dfs(i, j);
            }
        }
    }
    cout << cnt << endl;
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