#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

void solve() {
    int chk = 0 ^ 1 ^ 2;
    for (int i = 0; i < 9; i++) {
        char c;
        cin >> c;
        if (c == '?') {
            continue;
        }
        int v = c - 'A';
        chk ^= v;
    }
    char ans = chk + 'A';
    cout << ans << endl;
}

signed main() {
    FAST_IO;
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        // cout << "#TestCase: " << i << endl;
        solve();
    }
    return 0;
}