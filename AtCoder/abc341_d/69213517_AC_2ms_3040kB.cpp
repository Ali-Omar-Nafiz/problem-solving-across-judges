#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

bool check(int x, int n, int m, int k) {
    int cnt1 = x / n, cnt2 = x / m, cnt3 = x / lcm(n, m);
    int total = cnt1 + cnt2 - (2 * cnt3);
    if (total >= k) {
        return true;
    } else {
        return false;
    }
}

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    int l = 1, r = 1e18, ans = -1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (check(mid, n, m, k)) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    cout << ans << endl;
}

signed main() {
    FAST_IO;
    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++) {
        // cout << "#TestCase " << i << ": " << endl;
        solve();
    }
    return 0;
}