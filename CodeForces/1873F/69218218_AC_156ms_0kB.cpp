#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

bool check(int x, vector < int > &a, vector < int > &b, int k) {
    int cnt = 1;
    for (int i = 1; i < a.size(); i++) {
        if (i > 1 && b[i - 1] % b[i] == 0) {
            cnt++;
        } else {
            cnt = 1;
        }
        if (cnt >= x) {
            int sum = a[i] - a[i - x];
            if (sum <= k) {
                return true;
            }
        }
    }
    return false;
}

void solve() {
    int n, k;
    cin >> n >> k;
    vector < int > a(n + 1), b(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        a[i] += a[i - 1];
    }
    for (int i = 1; i <= n; i++) {
        cin >> b[i];
    }
    int l = 1, r = n, ans = 0;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (check(mid, a, b, k)) {
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
    cin >> t;
    for (int i = 1; i <= t; i++) {
        // cout << "#TestCase " << i << ": " << endl;
        solve();
    }
    return 0;
}