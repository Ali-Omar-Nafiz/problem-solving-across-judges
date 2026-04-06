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
    int ans = 0;
    for (int i = 0; i < n; i++) {
        vector < int > v(26);
        for (int j = i; j < n; j++) {
            if (v[str[j] - 'a'] != 0) {
                int add = ((j - i) * (j - i + 1)) / 2;
                ans += add;
                break;
            }
            if (j == n - 1) {
                int add = ((j - i + 1) * (j - i + 2)) / 2;
                ans += add;
            }
            v[str[j] - 'a']++;
        }
    }
    cout << ans % 100007 << endl;
}

signed main() {
    FAST_IO;
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cout << "Case " << i <<": ";
        solve();
    }
    return 0;
}