#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

int check(int x, int n) {
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (i * n <= x) {
            cnt += n;
        } else {
            cnt += (x / i);
        }
    }
    return cnt;
}

void solve() {
    int n;
    cin >> n;
    int med = ((n * n) + 1) / 2;
    int l = 1, r = n * n;
    int ans = -1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (check(mid, n) >= med) {
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
        // cout << "#TestCase: " << i << endl;
        solve();
    }
    return 0;
}