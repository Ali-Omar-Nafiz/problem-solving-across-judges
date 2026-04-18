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
    for (int i = 0; i < n; i++) {
        int l = 0, r = i;
        int ans = -1;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            int len = i - mid + 1;
            if (v[mid] >= len) {
                ans = len;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        cout << ans << " ";
    }
    cout << endl;
}

signed main() {
    FAST_IO;
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        // cout << "Case " << i << ": " << endl;
        solve();
    }
    return 0;
}