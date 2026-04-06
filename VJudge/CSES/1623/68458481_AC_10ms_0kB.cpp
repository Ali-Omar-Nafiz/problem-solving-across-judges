#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

#include <bits/stdc++.h>
using namespace std;

vector < int > v;
int n;

int fun(int idx, int a, int b) {
    if (idx >= n) {
        return abs(a - b);
    }
    int difA = fun(idx + 1, a + v[idx], b);
    int difB = fun(idx + 1, a, b + v[idx]);
    return min(difA, difB);
}

void solve() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int ans = fun(0, 0, 0);
    cout << ans << endl;
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