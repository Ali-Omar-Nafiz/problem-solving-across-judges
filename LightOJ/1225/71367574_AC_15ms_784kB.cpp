#include <bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

void solve() {
    string s;
    cin >> s;
    int l = 0, r = s.length() - 1;
    while (l <= r) {
        if (s[l] != s[r]) {
            cout << "No" << endl;
            return;
        }
        l++, r--;
    }
    cout << "Yes" << endl;
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
