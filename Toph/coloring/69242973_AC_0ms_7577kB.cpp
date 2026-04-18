#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long
#define PI acos(-1.0L)

void solve() {
    int x;
    cin >> x;
    long double a = (long double)x / 3.0L;
    long double s = (a * sqrt(3.0L)) / (2.0L + sqrt(3.0L));
    long double r = s / 2.0L;
    long double triangle_area = (sqrt(3.0L) / 4.0L) * a * a;
    long double circle_area = PI * r * r;
    cout << fixed << setprecision(10) << triangle_area - circle_area << endl;
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