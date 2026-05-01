#include <bits/stdc++.h>

using namespace std;
using ll = long long;
 
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long
 
void solve() {
    int n, x;
    cin >> n >> x;
    vector < int > v;
    for (int i = 0; i < n; i++) {
        int in;
        cin >> in;
        v.push_back(in);
    }
    int l = 0, r = 0, cnt = 0, sum = 0;
    int i = 0;
    while (l < n) {
        if (sum == x) {
            cnt++;
        }
        if (sum <= x && r < n) {
            sum += v[r];
            r++;
        } else {
            sum -= v[l];
            l++;
        }
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