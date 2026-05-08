#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>

using namespace std;
using namespace __gnu_pbds;
using ll = long long;

template <typename T, typename Comp = less < T > > 
using  ordered_set =  tree <T, null_type, Comp, rb_tree_tag, tree_order_statistics_node_update>;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

void solve() {
    int n;
    cin >> n;
    vector < int > v, s1(n), s2(n);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    ordered_set < int > oset1;
    for (int i = n - 1; i >= 0; i--) {
        oset1.insert(v[i]);
        s1[i] = oset1.order_of_key(v[i]);
    }
    ordered_set < int, greater < int > > oset2;
    for (int i = 0; i < n; i++) {
        oset2.insert(v[i]);
        s2[i] = oset2.order_of_key(v[i]);
    }
    int ans = 0;
    for (int i = 1; i + 1 < n; i++) {
        ans += (s1[i] * s2[i]);
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