#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl "\n"
#define int long long

int n;
vector < int > v;

int go(int index, int left, int right) {
    if (index == v.size()) {
        return abs(left - right);
    }
    int leftReturn = go(index + 1, left + v[index], right);
    int rightReturn = go(index + 1, left, right + v[index]);
    return min(leftReturn, rightReturn);
}

void solve() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int ans = go(0, 0, 0);
    cout << ans << endl;
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