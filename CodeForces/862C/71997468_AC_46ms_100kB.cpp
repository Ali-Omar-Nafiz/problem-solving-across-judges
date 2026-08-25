#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define endl '\n'
#define int long long

void solve() {
    int n, x;
    cin >> n >> x;
    if (x == 0 && n == 2) {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    if (n == 1) {
        cout << x << endl;
    } else if (n == 2) {
        cout << 0 << " " << x << endl;
    } else {
        int chk = 0;
        vector < int > ans;
        for (int i = 1; i <= n - 3; i++) {
            ans.push_back(i);
            chk ^= i;
        }
        if (chk == x) {
            ans.push_back((1ll << 18));
            ans.push_back((1ll << 19));
            ans.push_back((1ll << 18) ^ (1ll << 19));
        } else {
            ans.push_back(0);
            ans.push_back((1ll << 18));
            ans.push_back((1ll << 18) ^ chk ^ x);
        }
        for (auto x: ans) {
            cout << x << " ";
        }
        cout << endl;
    }
}

signed main() {
    FAST_IO;
    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++) {
      // cout << "Case " << i << ": \n";
      solve();
    }
    return 0;
}