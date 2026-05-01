#include <bits/stdc++.h>

using namespace std;
using ll = long long;
 
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long
 
void solve() {
    int n, x;
    cin >> n >> x;
    vector < int > v(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        v[i] = v[i] + v[i - 1];
    }
    map < int, int > mp;
    mp[0]++;
    int cnt = 0;
    for (int l = 1; l <= n; l++) {
        int k = v[l] - x;
        cnt += mp[k];
        mp[v[l]]++;
    }
    cout << cnt << endl;
}
 
signed main() {
    FAST_IO;
    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++) {
        // cout << "#TestCase: " << i << endl;
        solve();
    }
}
