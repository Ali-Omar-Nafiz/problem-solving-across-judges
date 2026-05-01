#include <bits/stdc++.h>
 
using namespace std;
using ll = long long;
 
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long
 
void solve() {
    int n, d;
    cin >> n >> d;
    vector < int > v;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int ans = 0;
    for (int i = 0; i + 2 < n; i++) {
        int chk = d + v[i];
        int idx = upper_bound(v.begin() + i + 2, v.end(), chk) - v.begin() - 1;
        if (idx - i + 1 >= 3) {
            int x = idx - i - 1;
            int add = (x * (x + 1)) / 2;
            ans += add;
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