#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;

const int M = 1e5;
const int M2 = 2e5;
const int OO = 1e9 + 7;
const ll MOD = 998244353;
const double PI = 2 * acos(0.0);

#define testcase int tc; cin >> tc; for (int i = 1; i <= tc; i++)
#define nline "\n"
#define all(v) v.begin(), v.end()

void io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void solve() {
    int n; cin >> n;
    deque<int> dq;
    map<int, bool> inQ;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        while (inQ[x] && !dq.empty()) {
            inQ[dq.front()] = 0;
            dq.pop_front();
        }
        dq.push_back(x);
        inQ[x] = 1;
        ans = max(ans, (int)dq.size());
    }
    cout << ans << nline;
}

signed main() {
    io();
    testcase solve();
    return 0;
}
