#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

void solve() {
    int n;
    cin >> n;
    vector < int > v(n + 1), pre1(n + 1), pre2(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }
    for (int i = 1; i <= n; i++) {
        pre1[i] = pre1[i - 1] + v[i];
    }
    sort(v.begin(), v.end());
    for (int i = 1; i <= n; i++) {
        pre2[i] = pre2[i - 1] + v[i];
    }
    int m;
    cin >> m;
    while (m--) {
        int t, l, r;
        cin >> t >> l >> r;
        if (t == 1) {
            cout << pre1[r] - pre1[l - 1] << endl;
        } else {
            cout << pre2[r] - pre2[l - 1] << endl;
        }
    }
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