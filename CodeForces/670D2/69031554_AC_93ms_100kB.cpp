#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

bool check(int mid, vector < int > &a, vector < int > &b, int k) {
    for (int i = 0; i < a.size(); i++) {
        if (a[i] * mid <= b[i]) {
            continue;
        } else if (((a[i] * mid)) <= (b[i] + k)) {
            k -= ((a[i] * mid) - b[i]);
        } else {
            return false;
        }
    }
    return true;
}

void solve() {
    int n, k;
    cin >> n >> k;
    vector < int > a, b;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a.push_back(x);
    }
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        b.push_back(x);
    }
    int l = 0, r = INT_MAX, ans = 0;
    for (int i = 0; i < n; i++) {
        int cur = b[i] / a[i];
        r = min(cur, r);
    }
    r += k;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (check(mid, a, b, k) == true) {
            ans = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    cout << ans << endl;
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