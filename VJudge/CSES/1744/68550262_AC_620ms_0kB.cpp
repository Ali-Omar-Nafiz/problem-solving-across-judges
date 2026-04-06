#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

vector < vector < int > > dp;

int fun(int a, int b) {
    if (a == b) {
        return 0;
    }
    if (dp[a][b] != -1) {
        return dp[a][b];
    }
    int ans = INT_MAX;
    for (int i = 1; i <= a / 2; i++) {
        ans = min(ans, fun(i, b) + fun(a - i, b) + 1);
    }
    for (int i = 1; i <= b / 2; i++) {
        ans = min(ans, fun(a, i) + fun(a, b - i) + 1);
    }
    return dp[a][b] = ans;
}

void solve() {
    int a, b;
    cin >> a >> b;
    dp.assign(a + 1, vector < int >(b + 1, -1));
    int ans = fun(a, b);
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