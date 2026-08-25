#include <bits/stdc++.h>

using namespace std;

const int MOD = 1e9 + 7;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

int phi(int n) {
    int ans = n;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            while (n % i == 0) {
                n /= i;
            }
            ans -= (ans / i);
        }
    }
    if (n > 1) {
        ans -= (ans / n);
    }
    return ans;
}

void solve() {
    int n;
    cin >> n;
    cout << phi(n) << endl;
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