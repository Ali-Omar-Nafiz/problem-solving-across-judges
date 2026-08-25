#include <bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

void solve() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int m;
    cin >> m;
    while (m--) {
        int x, y;
        cin >> x >> y;
        if (x >= a && x <= c && y >= b && y <= d) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
}

signed main() {
    FAST_IO;
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cout << "Case " << i << ":\n";
        solve();
    }
}
