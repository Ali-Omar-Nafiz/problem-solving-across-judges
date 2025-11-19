#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define int long long

int n, x, cnt = 0;
vector < int > v;
vector < int > dp(10e6 + 10e6, -1);
void printDp() {
    for (int i = 0; i < dp.size(); i++) {
        cout << dp[i] << ' ';
    }
    cout << "\n";
}

int go(int sum) {
    if (sum == x) {
        cnt++;
        return 1;
    }
    if (sum > x) {
        return 0;
    }
    if (dp[sum] == -1) {
       int total = 0;
        for (int i = 0; i < n; i++) {
            total += go(sum + v[i]);
            total %= MOD;
        }
        dp[sum] = total;
    }
    return dp[sum];
}

void solve() {
    cin >> n >> x;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int ans = go(0);
    cout << ans << "\n";
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