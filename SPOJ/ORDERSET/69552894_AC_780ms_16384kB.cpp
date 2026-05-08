#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>

using namespace std;
using namespace __gnu_pbds;
using ll = long long;

template <typename T> 
using  ordered_set =  tree <T, null_type, less < T >, rb_tree_tag, tree_order_statistics_node_update>;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

void solve() {
    int q;
    cin >> q;
    ordered_set < pair < int, int > > st;
    while (q--) {
        char c;
        cin >> c;
        int x;
        cin >> x;
        if (c == 'I') {
            st.insert({x, -1});
        } else if (c == 'D') {
            st.erase({x, -1});
        } else if (c == 'C') {
            cout << st.order_of_key({x, -1}) << endl;
        } else {
            if (x > st.size()) {
                cout << "invalid" << endl;
            } else {
                x--;
                cout << (*st.find_by_order(x)).first << endl;
            }
        }
    }
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