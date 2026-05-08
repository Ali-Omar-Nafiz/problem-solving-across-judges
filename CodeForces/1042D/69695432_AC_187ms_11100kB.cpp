#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>

using namespace std;
using namespace __gnu_pbds;
using ll = long long;

template <typename K, typename Comp = greater < K > >
using ordered_set = tree <K, null_type, Comp, rb_tree_tag, tree_order_statistics_node_update>;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

 
void solve () {
    int n, t;
    cin >> n >> t;
    vector < int > v(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        v[i] += v[i - 1];
    }
    ordered_set < pair < int, int > > st;
    st.insert({0, 0});
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        int chk = v[i] - t;
        ans += st.order_of_key({chk, INT_MAX});
        st.insert({v[i], i});
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