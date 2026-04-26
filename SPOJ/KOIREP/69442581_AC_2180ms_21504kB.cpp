#include <bits/stdc++.h>

using namespace std;
using ll = long long;
 
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long
 
void solve() {
    int n, m;
    cin >> n >> m;
    vector < pair < int, int > > v;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int x;
            cin >> x;
            v.push_back({x, i + 1});
        }
    }
    sort(v.begin(), v.end());
    map < int, int > mp;
    queue < int > q;
    int ans = INT_MAX;
    for (int i = 0; i < v.size(); i++) {
        q.push(i);
        mp[v[i].second]++;
        while (mp[v[q.front()].second] > 1) {
            mp[v[q.front()].second]--;
            q.pop();
        }
        if (mp.size() == n) {
            int mx = v[i].first;
            int mn = v[q.front()].first;
            int dif = abs(mx - mn);
            ans = min(ans, dif);
        }
    }
    cout << ans << endl;
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