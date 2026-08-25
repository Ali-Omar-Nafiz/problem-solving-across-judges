#include <bits/stdc++.h>

using namespace std;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;
    vector < vector < int > > adjMat(n, vector < int > (n));
    for (int i = 0; i < n; i++) {
        int u;
        cin >> u;
        int k;
        cin >> k;
        for (int j = 0; j < k; j++) {
            int v;
            cin >> v;
            adjMat[u - 1][v - 1] = 1;
        }
    }
    for (auto x: adjMat) {
        for (int i = 0; i < x.size(); i++) {
            cout << x[i] << " \n"[i == x.size() - 1];
        }
    }
}

signed main() {
    FAST_IO;
    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++) {
        solve();
    }
    return 0;
}