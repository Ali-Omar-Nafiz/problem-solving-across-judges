#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
// #define int long long

void solve() {
    string str;
    cin >> str;
    int n, k;
    n = str.length();
    k = 3;
    deque < char > dq;
    map < char, int > mp;
    int ans = INT_MAX;
    bool chk = true;
    for (int i = 0; i < n; i++) {
        char x;
        x = str[i];
        dq.push_back(x);
        if ((x - '1' + 1) <= k) {
            mp[x]++;
        }
        while (mp.size() >= k) {
            if (mp.size() == k) {
                ans = min(ans, (int)dq.size());
                chk = false;
            }
            if (mp.count(dq.front())) {
                mp[dq.front()]--;
            }
            if (mp[dq.front()] == 0) {
                mp.erase(dq.front());
            }
            dq.pop_front();
        }
    }
    if (chk) {
        cout << 0 << endl;
        return;
    }
    cout << ans << endl;
}
//
signed main() {
    FAST_IO;
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        // cout << "#TestCase: " << i << endl;
        solve();
    }
}