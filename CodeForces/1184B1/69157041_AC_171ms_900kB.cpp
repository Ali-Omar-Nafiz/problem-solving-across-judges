#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

void solve() {
    int s, b;
    cin >> s >> b;
    vector < int > a;
    for (int i = 0; i < s; i++) {
        int x;
        cin >> x;
        a.push_back(x);
    }
    vector < pair < int, int > > d;
    for (int i = 0; i < b; i++) {
        int x, y;
        cin >> x >> y;
        d.push_back({x, y});
    }
    sort(d.begin(), d.end());
    int last = 0;
    for (auto &[x, y]: d) {
        y += last;
        last = y;
    }
    for (auto x: a) {
        pair < int, int > chk = {x, INT_MAX};
        int idx = upper_bound(d.begin(), d.end(), chk) - d.begin();
        idx--;
        if (idx >= 0) {
            cout << d[idx].second << " ";
        } else {
            cout << 0 << " ";
        }
    }
    cout << endl;
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