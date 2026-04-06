#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

void solve() {
    int n, q;
    cin >> n >> q;
    vector < vector < int > > v(n + 1, vector < int >(4));
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        vector < int > tmp(4);
        tmp = v[i - 1];
        if (x == 1) {
            tmp[1]++;
        } else if (x == 2) {
            tmp[2]++;
        } else {
            tmp[3]++;
        }
        v[i] = tmp;
    }
    // for (int i = 0; i < (n + 1); i++) {
    //     for (int j = 0; j < 4; j++) {
    //         cout << v[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // cout << endl;
    while (q--) {
        int a, b;
        cin >> a >> b;
        for (int i = 1; i <= 3; i++) {
            int result = v[b][i] - v[a - 1][i];
            if (i == 3) {
                cout << result;
                continue;
            }
            cout << result << " ";
        }
        cout << endl;
    }
}

signed main() {
    freopen("bcount.in", "r", stdin);   // input from file
    freopen("bcount.out", "w", stdout); // output to file
    FAST_IO;
    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++) {
        solve();
    }
    return 0;
}