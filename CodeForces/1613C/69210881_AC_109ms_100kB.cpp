#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

void solve() {
    int n, h;
    cin >> n >> h;
    vector < int > v;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    int l = 1, r = 1e18, ans = -1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        int cnt = 0;
        for (int i = 0; i + 1 < n; i++) {
            int chk = v[i] + mid - 1;
            if (chk >= v[i + 1]) {
                cnt += (v[i + 1] - v[i]);
            } else {
                cnt += mid;
            }
        }
        cnt += mid;
        if (cnt >= h) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
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
        // cout << "#TestCase " << i << ": " << endl;
        solve();
    }
    return 0;
}