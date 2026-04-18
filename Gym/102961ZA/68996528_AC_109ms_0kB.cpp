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
        v[i] += v[i - 1];
    }
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        int chk = v[i] - x;
        int l = 0, r = i - 1;
        int ans = -1;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (v[mid] >= chk) {
                ans = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        if (ans != -1 && v[ans] == chk) {
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
        // cout << "#TestCase: " << i << endl;
        solve();
    }
    return 0;
}