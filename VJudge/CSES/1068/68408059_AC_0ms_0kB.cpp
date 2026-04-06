#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

void fun(int n) {
    cout << n << " ";
    if (n == 1) {
        return;
    }
    if (n & 1) {
        fun(n * 3 + 1);
    } else {
        fun(n / 2);
    }
}

void solve() {
    int n;
    cin >> n;
    fun(n);
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