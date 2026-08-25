#include <bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

void solve() {
    int n;
    cin >> n;
    vector < int > v;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            v.push_back(i);
            if (i * i != n) {
                v.push_back(n / i);
            }
        }
    }
    sort(v.rbegin(), v.rend());
    for (auto x: v) {
        for (int i = 1; i <= 15; i++) {
            int a = (1ll << i) - 1;
            int b = (1ll << (i - 1));
            if (a * b == x) {
                cout << x << endl;
                return;
            }
        }
    }
}

signed main() {
    FAST_IO;
    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++) {
        // cout << "Case " << i << ": ";
        solve();
    }
}