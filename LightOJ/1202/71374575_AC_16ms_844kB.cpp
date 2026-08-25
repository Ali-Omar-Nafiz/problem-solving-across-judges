#include <bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

void solve() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (((a + b) & 1) != ((c + d) & 1)) {
        cout << "impossible" << endl;
    } else {
        if (abs(a - c) == abs(b - d)) {
            cout << 1 << endl;
        } else {
            cout << 2 << endl;
        }
    }
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
