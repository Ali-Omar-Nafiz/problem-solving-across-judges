#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

int ceilDiv(int a, int b) {
    return ((a + b - 1) / b);
}

void solve() {
    int n, k;
    cin >> n >> k;
    vector < int > v;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int ans = INT_MAX;
    for (int i = 0; i < n; i++) {
        int x = v[i];
        if (x < k) {
            ans = min(ans, (k - x));
        } else if (x % k == 0) {
            ans = 0;
        } else {
            ans = min(ans, (k - (x % k)));
        }
    }
    if (k == 4 && n != 1) {
        int ev = 0;
        for (int i = 0; i < n; i++) {
            if (v[i] % 2 == 0) {
                ev++;
            }
        }
        if (ev >= 2) {
            ans = 0;
        } else if (ev == 1) {
            ans = min(ans, 1LL);
        } else {
            ans = min(ans, 2LL);
        }
    } else if (k == 4 && n == 1) {
        if (v[0] % 4 == 0) {
            ans = 0;
        } else {
            ans = min(ans, (k - (v[0] % k)));
        }
    }
    cout << ans << endl;
}

signed main() {
    FAST_IO;
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        solve();
    }
    return 0;
}