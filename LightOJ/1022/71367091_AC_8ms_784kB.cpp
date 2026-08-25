#include <bits/stdc++.h>

using namespace std;

const double PI = 2 * acos(0.0);

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

void solve() {
    double r;
    cin >> r;
    double ans = (4 * r * r) - (PI * r * r);
    cout << fixed << setprecision(2) << ans << endl;
}

signed main() {
    FAST_IO;
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cout << "Case " << i << ": ";
        solve();
    }
}
