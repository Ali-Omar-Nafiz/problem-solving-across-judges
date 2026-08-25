#include <bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

void solve() {
    int n;
    cin >> n;
    int s = n / 2;
    for (int b = s; b < n; b++) {
        int a = n - b;
        if (gcd(a, b) == 1) {
            cout << min(a, b) << " " << max(a, b) << endl;
            return;
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
