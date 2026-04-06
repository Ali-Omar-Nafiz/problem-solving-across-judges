#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

int fun(int n, int x) {
    if (n <= x) {
        return 1;
    }
    int a, b, ans;
    if (n & 1) {
        a = n / 2;
        b = a + 1;
    } else {
        a = n / 2;
        b = a;
    }
    ans = fun(a, x) + fun(b, x);
    return ans;
}

void solve() {
    int n, x;
    while (cin >> n >> x) {
        int ans = fun(n, x);
        cout << ans << endl;
    }
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