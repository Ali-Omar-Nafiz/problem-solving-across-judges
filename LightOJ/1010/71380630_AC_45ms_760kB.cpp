#include <bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

void solve() {
    int n, m;
    cin >> n >> m;
    if (n == 1 || m == 1) {
        cout << (n * m) << endl;
    } else if (n == 2 || m == 2) {
        if (m == 2) {
            swap(n, m);
        }
        cout << ((((m / 2) + 2 - 1) / 2) * 4) + ((m & 1) && (m / 2) % 2 == 0 ? 2 : 0) << endl;
    } else {
        cout << ((n * m) + 2 - 1) / 2 << endl;
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
    return 0;
}
