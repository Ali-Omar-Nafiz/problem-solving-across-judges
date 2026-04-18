#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

void solve() {
    int n;
    cin >> n;
    vector < int > v;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    int q;
    cin >> q;
    while (q--) {
        int x;
        cin >> x;
        int ans = lower_bound(v.begin(), v.end(), x) - v.begin();
        if (ans < n && v[ans] == x) {
            cout << "Yes " << ans + 1 << endl;
        } else {
            cout << "No " << ans + 1 << endl;
        }
    }
}

signed main() {
    FAST_IO;
    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++) {
        // cout << "Case " << i << ": ";
        solve();
    }
    return 0;
}