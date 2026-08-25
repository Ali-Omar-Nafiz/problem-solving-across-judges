#include <bits/stdc++.h>

using namespace std;

const double PI = 2 * acos(0.0);

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

double dist(int a, int b, int c, int d) {
     return sqrtl(((d - b) * (d - b)) +((c - a) * (c - a)));
}

void solve() {
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    double r = dist(a, b, c, d);
    double ab = dist(c, d, e, f);
    double theta = acos(((2 * r * r) - (ab * ab)) / (2 * r * r));
    double ans = r * theta;
    cout << fixed << setprecision(6) << ans << endl;
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
