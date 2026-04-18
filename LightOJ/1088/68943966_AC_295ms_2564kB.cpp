#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define int long long
#define endl '\n'

void solve() {
    int n, q;
    cin >> n >> q;
    vector < int > p;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        p.push_back(x);
    }
    sort(p.begin(), p.end());
    while (q--) {
        int a, b;
        cin >> a >> b;
        int cnt = 0;
        int l = 0, r = n - 1;
        int ans = n;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (p[mid] >= a) {
                ans = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        cnt += ans;
        l = 0, r = n - 1;
        ans = -1;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (p[mid] <= b) {
                ans = mid;
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        cnt += (n - (ans + 1));
        int sol = n - cnt;
        cout << sol << endl;
    }
}

signed main() {
    FAST_IO;
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cout << "Case " << i << ":" << endl;
        solve();
    }
    return 0;
}