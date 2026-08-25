#include <bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

void solve() {
    int n, c;
    cin >> n >> c;
    vector < int > v;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        x -= c;
        if (x > 0) {
            cnt++;
        }
        v.push_back(x);
    }
    sort(v.rbegin(), v.rend());
    int ans = 0;
    for (int i = 0; i < max(cnt, (n + 2 - 1) / 2); i++) {
        ans += v[i];
    }
    cout << ans << endl;
}
////
signed main() {
    FAST_IO;
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        // cout << "Case " << i << ":" << endl;
        solve();
    }
}