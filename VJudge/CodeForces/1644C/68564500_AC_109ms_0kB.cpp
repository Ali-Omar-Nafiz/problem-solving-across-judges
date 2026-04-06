#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

void solve() {
    int n, x;
    cin >> n >> x;
    vector < int > v(n + 1), pre(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        pre[i] = pre[i - 1] + v[i];
    }
    int ans = INT_MIN;
    for (int k = 0; k <= n; k++) {
        int mn = pre[0];
        for (int i = k; i <= n; i++) {
            mn = min(mn, pre[i - k]);
            ans = max(ans, pre[i] - mn + (k * x));
        }
        cout << ans << " ";
    }
    cout << endl;
}
signed main() {
    FAST_IO;
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        // cout << "#TestCase: " << i << endl;
        solve();
    }
    return 0;
}