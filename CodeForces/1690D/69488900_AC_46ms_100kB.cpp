#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define endl '\n'
#define int long long

void solve() {
    int n, k;
    cin >> n >> k;
    string str;
    cin >> str;
    vector < int > pre(n + 1);
    for (int i = 1; i <= n; i++) {
        if (str[i - 1] == 'B') {
            pre[i] = pre[i - 1] + 1;
        } else {
            pre[i] = pre[i - 1];
        }
    }
    int maxB = INT_MIN;
    for (int i = 0; i < (n - (k - 1)); i++) {
        int r = i + k;
        int l = i;
        int cntB = pre[r] - pre[l];
        maxB = max(maxB, cntB);
    }
    int ans = k - maxB;
    cout << ans << endl;
}

signed main() {
    FAST_IO;
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        solve();
    }
    return 0;
}