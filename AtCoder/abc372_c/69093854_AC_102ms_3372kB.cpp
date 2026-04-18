#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

void solve() {
    int n, q;
    cin >> n >> q;
    string str;
    cin >> str;
    int cnt = 0;
    for (int i = 0; i + 2 < n; i++) {
        if (str[i] == 'A' && str[i + 1] == 'B' && str[i + 2] == 'C') {
            cnt++;
        }
    }
    while (q--) {
        int x;
        char c;
        cin >> x >> c;
        int cnt1 = 0, cnt2 = 0;
        for (int i = max(0ll, x - 3); i + 2 <= min(n - 1, x + 2); i++) {
            if (str[i] == 'A' && str[i + 1] == 'B' && str[i + 2] == 'C') {
                cnt1++;
            }
        }
        cnt -= cnt1;
        str[x - 1] = c;
        for (int i = max(0ll, x - 3); i + 2 <= min(n - 1, x + 2); i++) {
            if (str[i] == 'A' && str[i + 1] == 'B' && str[i + 2] == 'C') {
                cnt2++;
            }
        }
        cnt += cnt2;
        cout << cnt << endl;
    }
}

signed main() {
    FAST_IO;
    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++) {
        // cout << "Case " << i << ": " << endl;
        solve();
    }
    return 0;
}