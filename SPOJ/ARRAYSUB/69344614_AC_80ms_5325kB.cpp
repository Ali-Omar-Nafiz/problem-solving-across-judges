#include <bits/stdc++.h>
 
using namespace std;
using ll = long long;
 
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long
 
void solve() {
    int n;
    cin >> n;
    vector < int > v;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int k;
    cin >> k;
    multiset < int > mst;
    for (int i = 0; i < n; i++) {
        if (i < k) {
            mst.insert(v[i]);
            if (i == k - 1) {
                cout << *prev(mst.end()) << " ";
            }
        } else {
            mst.erase(mst.find(v[i - k]));
            mst.insert(v[i]);
            cout << *prev(mst.end()) << " ";
        }
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
}