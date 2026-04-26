#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
// #define int long long

void solve() {
    int n, k;
    cin >> n >> k;
    deque < int > dq;
    set < int > st;
    map < int, int > mp;
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        st.insert(x);
        dq.push_back(x);
        mp[x]++;
        while ((int)st.size() > k) {
            mp[dq.front()]--;
            if (mp[dq.front()] == 0) {
                st.erase(dq.front());
            }
            dq.pop_front();
        }
        ans += (int)dq.size();
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