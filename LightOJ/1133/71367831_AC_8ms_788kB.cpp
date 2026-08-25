#include <bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

void solve() {
    int n, m;
    cin >> n >> m;
    vector < int > v;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    while (m--) {
        char c;
        cin >> c;
        if (c == 'P') {
            int x, y;
            cin >> x >> y;
            swap(v[x], v[y]);
        } else if (c == 'R') {
            reverse(v.begin(), v.end());
        } else {
            int d;
            cin >> d;
            if (c == 'S') {
                for (auto &x: v) {
                    x += d;
                }
            } else if (c == 'M') {
                for (auto &x: v) {
                    x *= d;
                }
            } else {
                for (auto &x: v) {
                    x /= d;
                }
            }
        }
    }
    for (auto x: v) {
        cout << x << " ";
    }
    cout << endl;
}

signed main() {
    FAST_IO;
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cout << "Case " << i << ":\n";
        solve();
    }
}
