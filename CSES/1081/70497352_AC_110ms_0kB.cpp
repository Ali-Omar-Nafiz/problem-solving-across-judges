#include <bits/stdc++.h>
 
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

void solve() {
    int n;
    cin >> n;
    vector < int > mp(1e6 + 1);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        mp[x]++;
    }
    vector < int > cnt(1e6 + 1);
    for (int i = 1; i <= 1e6; i++) {
        for (int j = i; j <= 1e6; j += i) {
            cnt[i] += mp[j];
        }
    }
    int ans = 1;
    for (int i = 1; i <= 1e6; i++) {
        if (cnt[i] >= 2) {
            ans = max(i, ans);
        }
    }
    cout << ans << endl;
}

signed main() {
    FAST_IO;
    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++) {
        solve();
    }
    return 0;
}