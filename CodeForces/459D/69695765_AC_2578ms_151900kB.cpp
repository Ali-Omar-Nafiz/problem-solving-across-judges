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
    int n;
    cin >> n;
    vector < int > v, l(n), r(n);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    map < int, int > mp;
    for (int i = 0; i < n; i++) {
        mp[v[i]]++;
        l[i] = mp[v[i]];
    }
    mp.clear();
    for (int i = n - 1; i >= 0; i--) {
        mp[v[i]]++;
        r[i] = mp[v[i]];
    }
    ordered_set < pair < int, int > > st;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans += st.order_of_key({r[i], INT_MAX});
        st.insert({l[i], i});
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