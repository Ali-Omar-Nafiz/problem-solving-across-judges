#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

void solve() {
    int x, y;
    cin >> x >> y;
    int xy = x ^ y;
    int cnt = 0;
    for (int i = 0; i < 30; i++) {
        if ((xy & (1ll << i)) == 0) {
            cnt++;
        } else {
            break;
        }
    }
    cout << (1ll << cnt) << endl;
}
//
signed main() {
    FAST_IO;
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        // cout << "#TestCase: " << i << endl;
        solve();
    }
    return 0;
}