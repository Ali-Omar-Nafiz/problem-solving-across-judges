#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

void solve() {
    int n;
    cin >> n;
    set < int > st;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        st.insert(x);
    }
    vector < int > v;
    for (auto x: st) {
        v.push_back(x);
    }
    int ans = 1, lst = n - 1;
    for (int i = 0; i < v.size(); i++) {
        int l = 0, r = i - 1;
        int idx = -1;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            int chk = v[i] - v[mid];
            if (chk <= lst) {
                idx = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        if (idx != -1) {
            int dif = i - idx + 1;
            ans = max(ans, dif);
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