#include <bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

void solve() {
    int p, s, r;
    cin >> p >> s >> r;
    if (p == s && r != 1) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }
}

signed main() {
    FAST_IO;
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cout << "Case " << i << ": ";
        solve();
    }
}
