#include <bits/stdc++.h>
 
using namespace std;
using ll = long long;
 
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long
 
bool check(int x, int k, vector < int > &v) {
    int cnt = 0;
    int n = v.size();
    for (int i = 0; i < n;) {
        int sum = 0;
        bool chk = false;
        while (i < n && sum + v[i] <= x) {
            sum += v[i];
            i++;
            chk = true;
        }
        if (!chk) {
            i++;
        } else {
            cnt++;
        }
    }
    return cnt <= k;
}
 
void solve() {
    int n, k;
    cin >> n >> k;
    vector < int > v;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int sum = accumulate(v.begin(), v.end(), 0ll);
    int l = *max_element(v.begin(), v.end()), r = sum;
    int ans = l;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (check(mid, k, v) == true) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
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
    return 0;
}
