#include <bits/stdc++.h>
 
using namespace std;
using ll = long long;
 
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long
 
void solve() {
    int n, k;
    cin >> n >> k;
    string str;
    cin >> str;
    int l = 0;
    vector < int > cnt(2);
    int ans = INT_MIN;
    for (int r = 0; r < n; r++) {
        cnt[str[r] - 'a']++;
        while (min(cnt[0], cnt[1]) > k) {
            cnt[str[l] - 'a']--;
            l++;
        }
        if (min(cnt[0], cnt[1]) <= k) {
            ans = max(ans, r - l + 1);
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