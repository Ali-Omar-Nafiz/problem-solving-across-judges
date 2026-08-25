#include <bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

double angle(double a, double b, double c) {
    return acos(((a * a) + (b * b) - (c * c)) / (2 * a * b));
}

void solve() {
    double r1, r2, r3;
    cin >> r1 >> r2 >> r3;
    double a = r1 + r2;
    double b = r1 + r3;
    double c = r2 + r3;
    double s = (a + b + c) / 2.0;
    double tArea = sqrtl(s * (s - a) * (s - b) * (s - c));
    double area1 = 0.5 * (r1 * r1) * angle(a, b, c);
    double area2 = 0.5 * (r2 * r2) * angle(a, c, b);
    double area3 = 0.5 * (r3 * r3) * angle(b, c, a);
    double ans = tArea - area1 - area2 - area3;
    cout << fixed << setprecision(10) << ans << endl;
}

signed main() {
    FAST_IO;
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cout << "Case " << i << ": ";
        solve();
    }
    return 0;
}
