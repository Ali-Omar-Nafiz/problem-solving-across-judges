#include <bits/stdc++.h>
 
using namespace std;
using ll = long long;
 
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long
 
void solve() {
    int n;
    cin >> n; 
    vector < int > ev, evId, od, odId, all;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        all.push_back(x);
        if (x & 1) {
            od.push_back(x);
            odId.push_back(i);
        } else {
            ev.push_back(x);
            evId.push_back(i);
        }
    }
    sort(all.begin(), all.end());
    sort(od.begin(), od.end());
    sort(ev.begin(), ev.end());
    for (int i = 0; i < od.size(); i++) {
        if (all[odId[i]] != od[i]) {
            cout << "NO" << endl;
            return;
        }
    }
    for (int i = 0; i < ev.size(); i++) {
        if (all[evId[i]] != ev[i]) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}
 
signed main() {
    FAST_IO;
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        // cout << "#TestCase: " << i << endl;
        solve();
    }
}