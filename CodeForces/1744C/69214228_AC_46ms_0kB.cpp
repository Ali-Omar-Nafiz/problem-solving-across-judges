#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define endl '\n'
#define int long long

void solve() {
    int n;
    char c;
    cin >> n >> c;
    string str;
    cin >> str;
    if (c == 'g') {
        cout << 0 << endl;
        return;
    }
    str = str + str;
    int lastGreen = -1, ans = 0;
    for (int i = str.length() - 1; i >= 0; i--) {
        if (str[i] == c && lastGreen != -1) {
            int diff = lastGreen - i;
            ans = max(ans, diff);
        }
        if (str[i] == 'g') {
            lastGreen = i;
        }
    }
    cout << ans << endl;
}
///
signed main() {
    FAST_IO;
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        solve();
    }
    return 0;
}