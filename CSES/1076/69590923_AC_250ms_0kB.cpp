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

int median(ordered_set < pair < int, int > > &oset) {
    int n = oset.size();
    int mid = (n & 1) ? n / 2 : (n / 2) - 1;
    return ((*oset.find_by_order(mid)).first);
}

void solve() {
    int n, k;
    cin >> n >> k;
    vector < int > v;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    ordered_set < pair < int, int > > oset;
    vector < int > ans;
    for (int i = 0; i < k; i++) {
        oset.insert({v[i], i});
    }
    ans.push_back(median(oset));
    for (int i = 0; i < n - k; i++) {
        oset.erase(oset.find({v[i], i}));
        oset.insert({v[i + k], i + k});
        ans.push_back(median(oset));
    }
    for (auto x: ans) {
        cout << x << " ";
    }
    cout << endl;
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