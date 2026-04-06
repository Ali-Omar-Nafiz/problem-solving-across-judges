#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl "\n"
#define int long long

void solve() {
    int s;
    cin >> s;
    int h = 0, m = 0;
    if (s >= 3600) {
        h = (int)(s / 3600);
        s = s % 3600;
    }
    if (s >= 60) {
        m = (int)(s / 60);
        s = s % 60;
    }
    cout << h << ":" << m << ":" << s << endl;
}

signed main() {
    FAST_IO;
    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++) {
        solve();
    }
    return 0;
}