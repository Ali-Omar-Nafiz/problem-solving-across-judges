#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

void solve() {
    int n, l, r;
    cin >> n >> l >> r;
    deque < int > dq;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        dq.push_back(x);
    }
    sort(dq.begin(), dq.end());
    int ans = 0;
    while (dq.size() > 1) {
        int s = dq.front();
        dq.pop_front();
        int left = l - s, right = r - s;
        int idx1 = lower_bound(dq.begin(), dq.end(), left) - dq.begin();
        int idx2 = upper_bound(dq.begin(), dq.end(), right) - 1 - dq.begin();
        ans += (idx2 - idx1 + 1);
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