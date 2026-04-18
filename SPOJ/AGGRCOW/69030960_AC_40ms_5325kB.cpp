#include <bits/stdc++.h>
 
using namespace std;
using ll = long long;
 
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

bool check(int x, vector < int > &v, int c) {
    int cnt = 1, last = v[0];
    for (int i = 1; i < v.size(); i++) {
        if ((v[i] - last) >= x) {
            cnt++;
            last = v[i];
        }
    }
    return cnt >= c;
}

void solve() {
    int n, c;
    cin >> n >> c;
    vector < int > v;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    int l = 0, r = abs(v[n - 1] - v[0]);
    int ans = 0;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (check(mid, v, c)) {
            ans = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    cout << ans << endl;
}
 
signed main() {
    FAST_IO;
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        // cout << "#TestCase: " << i << endl;
        solve();
    }
    return 0;
}