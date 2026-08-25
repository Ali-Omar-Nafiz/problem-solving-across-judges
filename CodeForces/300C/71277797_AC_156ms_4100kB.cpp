#include <bits/stdc++.h>

using namespace std;

const int MOD = 1e9 + 7;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

vector < int > fact(1e6 + 1);

void factorial() {
    fact[0] = fact[1] = 1;
    for (int i = 2; i <= 1e6; i++) {
        fact[i] = (fact[i - 1] * i) % MOD;
    }
}

int multi(int a, int b) {
    return ((a % MOD) * (b % MOD)) % MOD;
}

int modPow(int a, int b) {
    int ans = 1;
    while (b > 0) {
        a %= MOD;
        if (b & 1) {
            ans = multi(ans, a);
        }
        b >>= 1;
        a = multi(a, a);
    }
    return ans;
}

int modInv(int a) {
    return modPow(a, MOD - 2);
}

int divi(int a, int b) {
    return multi(a, modInv(b));
}

int sum(int a, int b) {
    return ((a % MOD) + (b % MOD)) % MOD;
}

int nCr(int n, int r) {
    return divi(fact[n], multi(fact[r], fact[n - r]));
}

bool isGood(int a, int b, int chk) {
    while (chk > 0) {
        int cur = chk % 10;
        if (cur != a && cur != b) {
            return false;
        }
        chk /= 10;
    }
    return true;
}

void solve() {
    int a, b, n;
    cin >> a >> b >> n;
    int ans = 0;
    for (int i = 0; i <= n; i++) {
        int x = i, y = n - i;
        int chk = (a * x) + (b * y);
        if (isGood(a, b, chk)) {
            int cur = nCr(n, x);
            ans = sum(ans, cur);
        }
    }
    cout << ans << endl;
}

signed main() {
    FAST_IO;
    factorial();
    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++) {
        // cout << "Case " << i << ": ";
        solve();
    }
}
