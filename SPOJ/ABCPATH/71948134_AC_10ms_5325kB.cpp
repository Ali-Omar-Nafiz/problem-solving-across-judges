#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define endl '\n'
#define int long long

const vector < int > dx = {-1, -1, -1, 0, 0, 1, 1, 1};
const vector < int > dy = {-1, 0, 1, -1, 1, -1, 0, 1};

bool isValid(int x, int y, int n, int m) {
    if (x >= 0 && x < n && y >= 0 && y < m) {
        return true;
    }
    return false;
}

void solve() {
    int n, m;
    int cnt = 0;
    while (1) {
        cin >> n >> m;
        if (n == 0 && m == 0) {
            return;
        }
        cnt++;
        cout << "Case " << cnt << ": ";
        vector < vector < char > > grid(n, vector < char > (m));
        vector < pair < int, int > > sorces;
        for (int i = 0; i < n; i++) {
          for (int j = 0; j < m; j++) {
              cin >> grid[i][j];
              if (grid[i][j] == 'A') {
                  sorces.push_back({i, j});
              }
          }
        }
        vector < vector < int > > dist(n, vector < int > (m, -1));
        queue < pair < int, int > > q;
        for (auto [x, y]: sorces) {
            q.push({x, y});
            dist[x][y] = 0;
        }
        while (!q.empty()) {
            auto [x, y] = q.front();
            q.pop();
            for (int i = 0; i < 8; i++) {
                int nx = x + dx[i];
                int ny = y + dy[i];
                if (isValid(nx, ny, n, m) && (grid[nx][ny] == grid[x][y] + 1) && (dist[nx][ny] == -1)) {
                    dist[nx][ny] = dist[x][y] + 1;
                    q.push({nx, ny});
                }
            }
        }
        int ans = INT_MIN;
        for (auto x: dist) {
            for (auto y: x) {
                ans = max(ans, y);
            }
        }
        cout << ans + 1 << endl;
    }
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