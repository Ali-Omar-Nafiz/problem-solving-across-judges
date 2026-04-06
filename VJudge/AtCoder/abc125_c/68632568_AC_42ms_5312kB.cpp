#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

void solve() {
    int n;
    cin >> n;
    vector < int > v(n + 1), left(n + 1), right(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        if (i > 1) {
            if (i == 2) {
                left[i] = v[i - 1];
            } else {
                left[i] = gcd(v[i - 1], left[i - 1]);
            }
        }
    }
    for (int i = n; i >= 1; i--) {
        if (i < n) {
            if (i == n - 1) {
                right[i] = v[n];
            } else {
                right[i] = gcd(v[i + 1], right[i + 1]);
            }
        }
    }
    int ans = INT_MIN;
    for (int i = 1; i <= n; i++) {
        int one = gcd(left[i], right[i]);
        int two = gcd(v[i], gcd(left[i], right[i]));
        ans = max({one, two, ans});
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