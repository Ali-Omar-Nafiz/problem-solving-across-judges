#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

void solve() {
    int n;
    cin >> n;
    vector < pair < int, int > > v;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x < (i + 1)) {
            v.push_back({x, (i + 1)});
        }
    }
    sort(v.begin(), v.end());
    n = v.size();
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int x = v[i].second;
        int l = 0, r = n - 1, idx = 0;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (v[mid].first <= x) {
                idx = mid;
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        ans += (n - idx - 1);
    }
    cout << ans << endl;
}
//
signed main() {
    FAST_IO;
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        // cout << "Case " << i << ": " << endl;
        solve();
    }
    return 0;
}