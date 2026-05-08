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
    int n, q;
    cin >> n >> q;
    ordered_set < pair < int, int > > st;
    vector < int > v;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
        st.insert({x, i});
    }
    while (q--) {
        char c;
        int x, y;
        cin >> c >> x >> y;
        if (c == '?') {
            int cnt = st.order_of_key({y, INT_MAX}) - st.order_of_key({x, INT_MIN});
            cout << cnt << endl;
        } else {
            x--;
            st.erase(st.find({v[x], x}));
            v[x] = y;
            st.insert({v[x], x});
        }
    }
}

signed main() {
    FAST_IO;
    int t = 1;
    for (int i = 1; i <= t; i++) {
        solve();
    }
    return 0;
}