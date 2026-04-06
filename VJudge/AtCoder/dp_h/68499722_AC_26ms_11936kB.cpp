#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const int MOD = 1000000007;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

int h, w;
vector < string > grid;
vector < vector < int > > dp;

int fun(int i, int j) {
    if (i == h - 1 && j == w - 1) {
        return 1;
    } else if (grid[i][j] == '#') {
        return 0;
    }
    int ans = 0;
    if (i + 1 < h) {
        if (grid[i + 1][j] == '.') {
            if (dp[i + 1][j] == -1) {
                dp[i + 1][j] = fun(i + 1, j);
            }
            ans = dp[i + 1][j];
            ans = ans % MOD;
        }
    }
    if (j + 1 < w) {
        if (grid[i][j + 1] == '.') {
            if (dp[i][j + 1] == -1) {
                dp[i][j + 1] = fun(i, j + 1);
            }
            ans += dp[i][j + 1];
            ans = ans % MOD;
        }
    }
    return ans;
}

void solve() {
    cin >> h >> w;
    dp.assign(h, vector < int >(w, -1));
    grid.clear();
    for (int i = 0; i < h; i++) {
        string str;
        cin >> str;
        grid.push_back(str);
    }
    int ans = 0;
    ans = fun(0, 0);
    cout << ans << endl;
}
signed main() {
    FAST_IO;
    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++) {
        // cout << "#TestCase: " << i << endl;
        solve();
    }
    return 0;
}

// https://cses.fi/problemset/task/1661/