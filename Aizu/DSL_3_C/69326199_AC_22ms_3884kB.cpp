#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
// #define int long long

void solve() {
    int n, q;
    cin >> n >> q;
    vector < int > v;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    while (q--) {
        ll x;
        cin >> x;
        ll ans = 0, sum = 0;
        queue < int > q;
        for (int i = 0; i < n; i++) {
            q.push(v[i]);
            sum += v[i];
            while (sum > x) {
                sum -= q.front();
                q.pop();
            }
            ans += q.size();
        }
        cout << ans << endl;
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
}