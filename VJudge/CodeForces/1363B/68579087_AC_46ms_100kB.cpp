#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

void solve() {
    string str;
    cin >> str;
    int n = str.length();
    vector < int > left(n + 1), right(n + 1);
    int cnt1 = 0, cnt0 = 0;
    for (int i = 1; i <= n; i++) {
        if (str[i - 1] == '1') {
            cnt1++;
        } else {
            cnt0++;
        }
        left[i] = min(cnt0, cnt1);
    }
    cnt0 = 0, cnt1 = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (str[i] == '1') {
            cnt1++;
        } else {
            cnt0++;
        }
        right[i] = min(cnt0, cnt1);
    }
    int ans = INT_MAX;
    for (int i = 0; i <= n; i++) {
        int sum = left[i] + right[i];
        ans = min(ans, sum);
    }
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