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
    int ans = 0;
    for (int i = 0; i + 1 < n; i++) {
        int mx = v[i], mn = v[i], gcd = v[i];
        for (int j = i + 1; j < n; j++) {
            mx = max(mx, v[j]), mn = min(mn, v[j]);
            gcd = __gcd(gcd, v[j]);
            int d = mx - mn;
            if (d == gcd) {
                ans++;
            } else {
                break;
            }
        }
    }
    cout << ans << endl;
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