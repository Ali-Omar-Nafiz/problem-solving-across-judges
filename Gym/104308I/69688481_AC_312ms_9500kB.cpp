#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>

using namespace std;
using namespace __gnu_pbds;
using ll = long long;

template <typename T, typename Comp = less < T > >
using ordered_set = tree <T, null_type, Comp, rb_tree_tag, tree_order_statistics_node_update>;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

 
void solve () {
    int n, q;
    cin >> n >> q;
    map < int, int > mp;
    ordered_set < int > st;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (mp[x] == 0) {
            mp[x] = i + 1;
        }
        st.insert(i + 1);
    }
    while (q--) {
        int x;
        cin >> x;
        int idx = mp[x];
        int ans = st.order_of_key(idx) + 1;
        cout << ans << endl;
        st.erase(st.find(idx));
        st.insert(*st.begin() - 1);
        mp[x] = *st.begin();
    }
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