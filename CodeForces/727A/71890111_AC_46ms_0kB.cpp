#include <bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

vector < int > order;

bool dfs(int a, int b) {
    if (a > b) {
        return false;
    }
    if (a == b) {
        return true;
    }
    if (dfs(2 * a, b)) {
        order.push_back(2 * a);
        return true;
    } else if (dfs((10 * a) + 1, b)) {
        order.push_back((10 * a) + 1);
        return true;
    } else {
        return false;
    }
}

void solve() {
    int a, b;
    cin >> a >> b;
    bool chk = dfs(a, b);
    if (chk) {
        order.push_back(a);
        cout << "YES" << endl;
        cout << order.size() << endl;
        for (int i = order.size() - 1; i >= 0; i--) {
            cout << order[i] << " ";
        }
        cout << endl;
    } else {
        cout << "NO" << endl;
    }
}
//
signed main() {
    FAST_IO;
    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++) {
        // cout << "#TestCase: " << i << endl;
        solve();
    }
}