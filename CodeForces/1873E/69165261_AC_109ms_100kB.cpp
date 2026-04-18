#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

bool check(int h, vector < int > &v, int w) {
    int cnt = 0;
    for (int i = 0; i < v.size(); i++) {
        if (h > v[i]) {
            cnt += (h - v[i]);
        }
    }
    if (cnt <= w) {
        return true;
    } else {
        return false;
    }
}

void solve() {
    int n, x;
    cin >> n >> x;
    vector < int > v;
    for (int i = 0; i < n; i++) {
        int in;
        cin >> in;
        v.push_back(in);
    }
    int l = 1, r = 2e9, ans = -1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (check(mid, v, x)) {
            ans = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
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