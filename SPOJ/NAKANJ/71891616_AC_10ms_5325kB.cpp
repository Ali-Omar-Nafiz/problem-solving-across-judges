#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define endl '\n'
#define int long long

const vector < int > dx = {1, 1, -1, -1, 2, 2, -2, -2};
const vector < int > dy = {2, -2, 2, -2, 1, -1, 1, -1};

bool isValid(int x, int y) {
    if (x <= 8 && x >= 1 && y <= 8 && y >= 1) {
        return true;
    }
    return false;
}

void solve() {
    string a, b;
    cin >> a >> b;
    vector < vector < int > > dist(9, vector < int >(9, -1));
    int sx, sy, dsx, dsy;
    sx = a[0] - 'a' + 1;
    sy = a[1] - '0';
    dsx = b[0] - 'a' + 1;
    dsy = b[1] - '0';
    queue < pair < int, int > > q;
    q.push({sx, sy});
    dist[sx][sy] = 0;
    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();
        if (x == dsx && y == dsy) {
            cout << dist[x][y] << endl;
            return;
        }
        for (int i = 0; i < 8; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (isValid(nx, ny) && dist[nx][ny] == -1) {
                dist[nx][ny] = dist[x][y] + 1;
                q.push({nx, ny});
            }
        }
    }
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