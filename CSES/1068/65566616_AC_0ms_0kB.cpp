#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl "\n";
#define int long long

void weirdAlgorithm(int n) {
    cout << n << ' ';
    if (n == 1) {
        return;
    }
    if (n & 1) {
        n = n * 3 + 1;
        weirdAlgorithm(n);
    } else {
        n = n / 2;
        weirdAlgorithm(n);
    }
}

void solve() {
    int n;
    cin >> n;
    weirdAlgorithm(n);
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