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
        int l = 0, r = b - 1;
        int idx = -1;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (d[mid].first <= x) {
                idx = mid;
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        if (idx != -1) {
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