#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define int long long

void solve() {
    int n, x;
    cin >> n >> x;
    vector < int > coins;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        coins.push_back(a);
    }
    vector < int > dp(x + 1, 0);
    dp[0] = 1;
    for (int i = 0; i <= x; i++) {
        for (int j = 0; j < n; j++) {
            if (i + coins[j] <= x) {
                dp[i + coins[j]] = (dp[i + coins[j]] + dp[i]) % MOD;
            }
        }
    }
    cout << dp[x];
}

signed main() {
    FAST_IO;
    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++) {
        solve();
    }
    return 0;
}