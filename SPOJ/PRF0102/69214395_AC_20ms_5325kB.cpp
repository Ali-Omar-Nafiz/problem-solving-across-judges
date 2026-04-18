#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

void solve() {
    double n;
    cout << "Please enter any number: " << endl;
    cin >> n;
    if (n < 0) {
        cout << "Accept positive number only!" << endl;
        return;
    }
    double l = 1, r = max(1.0, n), ans = -1;
    for (int step = 0; step < 100; step++) {
        double mid = l + (r - l) / 2;
        if (mid * mid <= n) {
            ans = mid;
            l = mid;
        } else {
            r = mid;
        }
    }
    cout << "Square root of " << fixed << setprecision(6) << n << " is " << fixed << setprecision(6) << ans << endl;
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