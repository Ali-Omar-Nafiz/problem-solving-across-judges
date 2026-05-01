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
    int l = 0, r = n - 1, s = 0, d = 0, c = 1;
    while (l <= r) {
        int cur;
        if (v[l] > v[r]) {
            cur = v[l];
            l++;
        } else {
            cur = v[r];
            r--;
        }
        if (c) {
            s += cur;
        } else {
            d += cur;
        }
        c ^= 1;
    }
    cout << s << " " << d << endl;
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