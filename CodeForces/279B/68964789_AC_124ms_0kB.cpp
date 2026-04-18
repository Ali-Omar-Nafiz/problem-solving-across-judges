#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define int long long
#define endl '\n'

void solve() {
    int n, t;
    cin >> n >> t;
    vector < int > v(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        v[i] += v[i - 1];
    }
    int ans = INT_MIN;
    for (int i = n; i >= 1; i--) {
        int l = 0, r = i - 1;
        int best = 0;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            int chk = v[i] - v[mid];
            if (chk <= t) {
                best = i - mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        ans = max(ans, best);
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