#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

void solve() {
    int n;
    cin >> n;
    int l = 2, r = 1e10, ans = -1, store = 0;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        int chk = ((mid - 1) * mid) / 2;
        if (chk <= n) {
            ans = mid;
            store = chk;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    int diff = n - store;
    ans += diff;
    cout << ans << endl;
}

signed main() {
    FAST_IO;
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        // cout << "#TestCase " << i << ": " << endl;
        solve();
    }
    return 0;
}