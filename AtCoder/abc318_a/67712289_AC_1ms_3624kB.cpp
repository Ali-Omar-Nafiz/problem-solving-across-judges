#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl "\n"
#define int long long

void solve() {
    int n, m, p;
    cin >> n >> m >> p;
    if (n < m) {
        cout << 0 << endl;
        return;
    }
    cout << max(0ll, (n - m) / p) + 1 << endl;
}

signed main() {
    FAST_IO;
    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++) {
        solve();
    }
    return 0;
}