#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>

using namespace std;
using namespace __gnu_pbds;
using ll = long long;

template <typename K, typename V, typename Comp = less < K > >
using ordered_set = tree <K, V, Comp, rb_tree_tag, tree_order_statistics_node_update>;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

 
void solve () {
    int n;
    cin >> n;
    vector < int > v(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        v[i] += v[i - 1];
    }
    ordered_set < int, int > mp;
    int ans = 0;
    for (int i = n; i > 0; i--) {
        if (mp[2 * v[i]] && v[n] == (3 * v[i])) {
            ans += mp[2 * v[i]];
            if (v[i] == 0) {
                ans--;
            }
        }
        mp[v[i]]++;
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