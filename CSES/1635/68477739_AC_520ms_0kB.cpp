#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

int n, x;
vector < int > v;
vector < int > dp;

int fun(int sum) {
    if (sum == x) {
        return 1;
    } else if (sum > x) {
        return 0;
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (sum + v[i] <= x) {
            if (dp[sum + v[i]] == -1) {
                dp[sum + v[i]] = fun(sum + v[i]);
            }
            ans += dp[sum + v[i]];
            ans %= 1000000007;
        }
    }
    return ans;
}

void solve() {
    cin >> n >> x;
    v.clear();
    dp.assign(x + 1, -1);
    dp[0] = 1;
    for (int i = 0; i < n; i++) {
        int in;
        cin >> in;
        v.push_back(in);
    }
    int ans = fun(0);
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