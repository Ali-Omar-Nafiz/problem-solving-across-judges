#include <bits/stdc++.h>
 
using namespace std;
using ll = long long;
 
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long
 
void solve() {
    int n;
    cin >> n;
    vector < int > v;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    int mid = n / 2;
    int l = 0, r = mid;
    int cnt = 0;
    while ((l < mid) && (r < n)) {
        if (v[r] < (2 * v[l])) {
            r++;
        } else {
            cnt++;
            l++;
            r++;
        }
    }
    int ans = n - cnt;
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