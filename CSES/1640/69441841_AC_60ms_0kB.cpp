#include <bits/stdc++.h>

using namespace std;
using ll = long long;
 
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long
 
void solve() {
    int n, x;
    cin >> n >> x;
    vector < pair < int, int > > v;
    for (int i = 0; i < n; i++) {
        int in;
        cin >> in;
        v.push_back({in, i + 1});
    }
    sort(v.begin(), v.end());
    int l = 0, r = n - 1;
    while (l < r) {
        int sum = v[l].first + v[r].first;
        if (sum < x) {
            l++;
        } else if (sum > x) {
            r--;
        }
        if (sum == x) {
            cout << v[l].second << " " << v[r].second << endl;
            return;
        }
    }
    cout << "IMPOSSIBLE" << endl;
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