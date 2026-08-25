#include <bits/stdc++.h>

using namespace std;

const int MOD = 10000007;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

int a, b, c, d, e, f;
vector < int > dp;

int fn(int n) {
    if (n == 0) {
        dp[n] = a;
    } else if (n == 1) {
        dp[n] = b;
    } else if (n == 2) {
        dp[n] = c;
    } else if (n == 3) {
        dp[n] = d;
    } else if (n == 4) {
        dp[n] = e;
    } else if (n == 5) {
        dp[n] = f;
    }
    if (n <= 5) {
        dp[n] %= MOD;
        return dp[n];
    }
    int one, two, three, four, five, six;
    if (dp[n - 1] != -1) {
        one = dp[n - 1];
    } else {
        one = fn(n - 1);
    }
    if (dp[n - 2] != -1) {
        two = dp[n - 2];
    } else {
        two = fn(n - 2);
    }
    if (dp[n - 3] != -1) {
        three = dp[n - 3];
    } else {
        three = fn(n - 3);
    }
    if (dp[n - 4] != -1) {
        four = dp[n - 4];
    } else {
        four = fn(n - 4);
    }
    if (dp[n - 5] != -1) {
        five = dp[n - 5];
    } else {
        five = fn(n - 5);
    }
    if (dp[n - 6] != -1) {
        six = dp[n - 6];
    } else {
        six = fn(n - 6);
    }
    dp[n] = one + two + three + four + five + six;
    dp[n] %= MOD;
    return dp[n];
}


void solve() {
    int n;
    cin >> a >> b >> c >> d >> e >> f >> n;
    dp.assign(n + 1, -1);
    int ans = fn(n);
    cout << ans % 10000007 << endl;
}

signed main() {
    FAST_IO;
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cout << "Case " << i << ": ";
        solve();
    }
}
