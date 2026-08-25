#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define endl '\n'
#define int long long

void solve() {
    int n;
    cin >> n;
    map < int, int > mp;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        mp[x] = i;
    }
    int cnt = 1;
    for (int i = 2; i <= n; i++) {
        if (mp[i] < mp[i - 1]) {
            cnt++;
        }
    }
    cout << cnt << endl;
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