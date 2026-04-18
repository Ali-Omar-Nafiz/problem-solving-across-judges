#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

bool check(int x, vector < int > &v, vector < int > &a) {
    int half = x / 2;
    for (int i = half; i + half < v.size(); i++) {
        if (a[i] != a[i + 1]) {
            int left = v[i] - v[i - half];
            int right = v[i + half] - v[i];
            if (left == (a[i] * half) && right == (a[i + 1] * half)) {
                return true;
            }
        }
    }
    return false;
}

void solve() {
    int n;
    cin >> n;
    vector < int > a(n + 1), v(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        a[i] = v[i];
        v[i] += v[i - 1];
    }
    int l = 2, r = n, ans = -1;
    if (r & 1) {
        r--;
    }
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (mid & 1) {
            mid--;
        }
        if (check(mid, v, a)) {
            ans = mid;
            l = mid += 2;
        } else {
            r = mid -= 2;
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