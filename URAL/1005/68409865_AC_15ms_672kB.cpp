#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

int n;
vector < int > v;

int fun(int ind, int p1, int p2) {
    if (ind >= n) {
        return abs(p1 - p2);
    }
    int diff1 = fun((ind + 1), p1 + v[ind], p2);
    int diff2 = fun((ind + 1), p1, p2 + v[ind]);
    return min(diff1, diff2);
}

void solve() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int ans = fun(0, 0, 0);
    cout << ans;
}

signed main() {
    FAST_IO;
    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++) {
        // cout << "#TestCase: " << i << endl;
        solve();
    }
    return 0;
}