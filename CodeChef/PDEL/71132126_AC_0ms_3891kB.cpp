#include <bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

bool isPal(string s, int l, int r) {
    while (l < r) {
        if (s[l] != s[r]) {
            return false;
        }
        l++, r--;
    }
    return true;
}

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (isPal(s, 0, n - 1)) {
        cout << 0 << endl;
        return;
    }
    if (n == 2 && !isPal(s, 0, n - 1)) {
        cout << -1 << endl;
        return;
    }
    if (s[0] == s[n - 1]) {
        cout << 1 << endl;
        return;
    }
    if (!isPal(s, 0, n - 2) || !isPal(s, 1, n - 1)) {
        cout << 1 << endl;
        return;
    }
    if (isPal(s, 0, n - 2) && isPal(s, 1, n - 1)) {
        cout << -1 << endl;
        return;
    }
    cout << 2 << endl;
}

signed main() {
    FAST_IO;
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        // cout << "Case " << i << ":" << endl;
        solve();
    }
}