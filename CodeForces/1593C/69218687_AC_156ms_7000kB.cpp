#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

void solve() {
    int n, k;
    cin >> n >> k;
    vector < int > v;
    for (int i = 0; i < k; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.rbegin(), v.rend());
    vector < int > chk;
    chk.push_back(0);
    for (int i = 1; i < k; i++) {
        int cur = chk.back() + (n - v[i - 1]);
        chk.push_back(cur);
    }
    int ans = 0;
    for (int i = 0; i < k; i++) {
        if (chk[i] < v[i]) {
            ans++;
        } else {
            break;
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