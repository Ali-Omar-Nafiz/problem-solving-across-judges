#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

void solve() {
    int n, m;
    cin >> n >> m;
    vector < int > v(n + 1), v2(n + 1), pre(n + 1), pre2(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        v2[i] = i * v[i];
        pre[i] = pre[i - 1] + v[i];
        pre2[i] = pre2[i - 1] + v2[i];
    }
    int ans = LLONG_MIN;
    for (int i = 1; i + m - 1 <= n; i++) {
        int j = i + m - 1;
        int sum = pre[j] - pre[i - 1];
        int sum2 = pre2[j] - pre2[i - 1];
        int cur = sum2 - ((i - 1) * sum);
        ans = max(cur, ans);
    }
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