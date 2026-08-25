#include <bits/stdc++.h>

using namespace std;

const int MOD = 1e9 + 7;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

int modPow(int a, int b) {
    int ans = 1;
    while (b > 0) {
        if (b & 1) {
            ans = ((ans % MOD) * (a % MOD)) % MOD;
        }
        b >>= 1;
        a = ((a % MOD) * (a % MOD)) % MOD;
    }
    return ans;
}

void solve() {
    int a, b;
    cin >> a >> b;
    cout << modPow(a, b) << endl;
}

signed main() {
    FAST_IO;
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        // cout << "Case " << i << endl;
        solve();
    }
}