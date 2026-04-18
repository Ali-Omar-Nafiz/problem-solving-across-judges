#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

bool check(int x, vector < int > &v, int t) {
    int cnt = 0;
    for (int i = 0; i < v.size(); i++) {
        cnt += (x / v[i]);
        if (cnt >= t) {
            return true;
        }
    }
    return false;
}

void solve() {
    int n, t;
    cin >> n >> t;
    vector < int > v;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    int l = 0, r = v[n - 1] * t, ans = -1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (check(mid, v, t)) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    cout << ans << endl;
}

signed main() {
    FAST_IO;
    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++) {
        // cout << "#TestCase " << i << ": " << endl;
        solve();
    }
    return 0;
}