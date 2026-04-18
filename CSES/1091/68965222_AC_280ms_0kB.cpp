#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define int long long
#define endl '\n'

void solve() {
    int n, m;
    cin >> n >> m;
    multiset < int > mst;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        mst.insert(x);
    }
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        if (!mst.empty()) {
            auto it = mst.upper_bound(x);
            if (it != mst.begin()) {
                cout << *prev(it) << endl;
                mst.erase(prev(it));
            } else {
                cout << -1 << endl;
            }
        } else {
            cout << -1 << endl;
        }

    }
}

signed main() {
    FAST_IO;
    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++) {
        // cout << "#TestCase: " << i << endl;
        solve();
    }
    return 0;
}