#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

void solve() {
    int n;
    cin >> n;
    string str;
    cin >> str;
    int l = 0, r = n - 1;
    while (l <= r) {
        if (str[l] != str[r]) {
            l++;
            r--;
            continue;
        } else {
            cout << (r - l + 1) << endl;
            return;
        }
    }
    cout << 0 << endl;
}
//
signed main() {
    FAST_IO;
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        solve();
    }
    return 0;
}