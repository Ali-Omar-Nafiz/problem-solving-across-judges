#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

void solve() {
    int n, k, q;
    cin >> n >> k >> q;
    vector < int > dif(200005), have(200005);
    while (n--) {
        int a, b;
        cin >> a >> b;
        dif[a]++;
        dif[b + 1]--;
    }
    for (int i = 1; i < dif.size(); i++) {
        dif[i] += dif[i - 1];
        if (dif[i] >= k) {
            have[i] = have[i - 1] + 1;
        } else {
            have[i] = have[i - 1];
        }
    }
    while (q--) {
        int a, b;
        cin >> a >> b;
        int ans = have[b] - have[a - 1];
        cout << ans << endl;
    }
}

signed main() {
    FAST_IO;
    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++) {
        // cout << "#TestCase: " << i << endl;
        solve();
    }
    return 0;
}