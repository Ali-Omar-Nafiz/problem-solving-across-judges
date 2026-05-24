#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

void solve() {
    int n;
    cin >> n;
    multiset < int, greater < int > > st;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        st.insert(x);
    }
    int ans = 0;
    while (st.size() > 1) {
        int x = *st.begin(), y = *next(st.begin());
        st.erase(st.find(x)), st.erase(st.find(y));
        x--, y--;
        if (x > 0) {
            st.insert(x);
        }
        if (y > 0) {
            st.insert(y);
        }
        ans++;
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