#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

void solve() {
    int l, r;
    cin >> l >> r;
    int cnt = 0;
    for (int i = 1; i <= 62; i++) {
        int cur = (1ll << i) - 1;
        for (int j = 0; j < i - 1; j++) {
            int chk = cur & (~(1ll << j));
            if (chk >= l && chk <= r) {
                cnt++;
            }
        }
    }
    cout << cnt << endl;
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