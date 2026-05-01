#include <bits/stdc++.h>
 
using namespace std;
using ll = long long;
 
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long
 
void solve() {
    int n, d;
    cin >> n >> d;
    vector < pair < int, int > > v;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }
    sort(v.begin(), v.end());
    vector < int > pre(n + 1);
    for (int i = 0; i < n; i++) {
        pre[i + 1] = pre[i] + v[i].second;
    }
    int l = 0, fct = INT_MIN;
    multiset < int > mst;
    for (int r = 0; r < n; r++) {
        mst.insert(v[r].first);
        while (*(prev(mst.end())) - *(mst.begin()) >= d) {
            mst.erase(mst.find(v[l].first));
            l++;
        }
        if (*(prev(mst.end())) - *(mst.begin()) < d) {
            int sum = pre[r + 1] - pre[l];
            if (sum > fct) {
                fct = max(sum, fct);
            }
        }
    }
    cout << fct << endl;
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