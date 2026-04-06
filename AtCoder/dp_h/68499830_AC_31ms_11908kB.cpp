#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const int MOD = 1000000007;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

void solve() {
    int h, w;
    cin >> h >> w;
    vector < string > grid;
    vector < vector < int > > dp(h, vector < int >(w, -1));
    for (int i = 0; i < h; i++) {
        string str;
        cin >> str;
        grid.push_back(str);
    }
    for (int i = h - 1; i >= 0; i--) {
        for (int j = w - 1; j >= 0; j--) {
            if (i == h - 1 && j == w - 1) {
                dp[i][j] = 1;
            } else if (grid[i][j] == '#') {
                dp[i][j] = 0;
            } else {
                int ans = 0;
                if (i + 1 < h) {
                    if (grid[i + 1][j] == '.') {
                        ans = dp[i + 1][j];
                        ans = ans % MOD;
                    }
                }
                if (j + 1 < w) {
                    if (grid[i][j + 1] == '.') {
                        ans += dp[i][j + 1];
                        ans = ans % MOD;
                    }
                }
                dp[i][j] = ans;
            }
        }
    }
    int anss = dp[0][0];
    cout << anss << endl;
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