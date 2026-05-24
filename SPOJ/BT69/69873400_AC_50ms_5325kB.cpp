#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

void solve() {
    int x, y;
    cin >> x >> y;
    if (x > y) {
        cout << 0 << endl;
        return;
    }
    int m1 = 63 - __builtin_clzll(x), m2 = 63 - __builtin_clzll(y);
    int mx = max(m1, m2);
    int ans = 0;
    for (int i = mx; i >= 0; i--) {
        int a = x & (1ll << i), b = y & (1ll << i);
        if (a != b) {
            if (a > b) {
                break;
            }
            ans = ans | (1ll << i);
        }
    }
    if ((x ^ ans) <= y) {
        for (int i = 0; i <= mx + 1; i++) {
            int a = x & (1ll << i), b = y & (1ll << i);
            if (a == b && a == 0) {
                ans |= (1ll << i);
                for (int j = 0; j < i; j++) {
                    ans &= (~(1ll << j));
                }
                break;
            }
        }
    }
    cout << ans << endl;
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