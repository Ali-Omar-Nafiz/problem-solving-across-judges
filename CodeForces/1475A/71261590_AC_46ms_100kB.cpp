#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

void solve() {
    int n;
    cin >> n;
    if (n & 1) {
        cout << "YES" << endl;
    } else {
        while ((n & 1) != 1) {
            n /= 2;
        }
        if (n > 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}
//
signed main() {
    FAST_IO;
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        solve();
    }
    return 0;
}