#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

bool check(int x, int n, int p, int l, int t) {
    int w = n - x;
    int tCnt = w * 2;
    int unlc = (n + 7 - 1) / 7;
    int chk = (w * l) + (min(unlc, tCnt) * t);
    if (chk >= p) {
        return true;
    } else {
        return false;
    }
}

void solve() {
    int n, p, l, t;
    cin >> n >> p >> l >> t;
    int lo = 0, r = n;
    int ans = 0;
    while (lo <= r) {
        int mid = lo + (r - lo) / 2;
        if (check(mid, n, p, l, t)) {
            ans = mid;
            lo = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    cout << ans << endl;
}
//
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