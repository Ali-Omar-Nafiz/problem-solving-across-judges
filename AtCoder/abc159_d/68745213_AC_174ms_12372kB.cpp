#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

void solve() {
    int n;
    cin >> n;
    map < int, int > mp;
    vector < int > v;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
        mp[x]++;
    }
    int ans = 0;
    for (auto [x, y]: mp) {
        ans += (((y - 1) * y) / 2);
    }
    for (int i = 0; i < n; i++) {
        int res = ans - (mp[v[i]] - 1);
        cout << res << endl;
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