#include <bits/stdc++.h>

using namespace std;

const int MOD = 1e9 + 7;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

void solve() {
    int n;
    cin >> n;
    int multi = 1;
    set < int > ans;
    for (int i = 1; i < n; i++) {
        if (gcd(n, i) == 1) {
            multi = (multi * i) % n;
            ans.insert(i);
        }
    }
    while (multi % n != 1) {
        ans.erase(multi % n);
        multi /= (multi % n);
    }
    cout << ans.size() << endl;
    for (auto x: ans) {
        cout << x << " ";
    }
    cout << endl;
}

signed main() {
    FAST_IO;
    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++) {
        // cout << "Case " << i << ": ";
        solve();
    }
}
