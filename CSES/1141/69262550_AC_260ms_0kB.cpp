#include <bits/stdc++.h>

using namespace std;
using ll = long long;


#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

void solve() {
    int n;
    cin >> n;
    deque < int > q;
    map < int, int > mp;
    int ans = LLONG_MIN;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        q.push_back(x);
        mp[x]++;
        while (mp[x] > 1) {
            mp[q.front()]--;
            q.pop_front();
        }
        ans = max(ans, (int)q.size());
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