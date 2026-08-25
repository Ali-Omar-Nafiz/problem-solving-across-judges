#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define endl '\n'
#define int long long

void solve() {
    int n;
    cin >> n;
    deque < int > dq;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        dq.push_back(x);
    }
    if (is_sorted(dq.begin(), dq.end())) {
        cout << 0 << endl;
        return;
    }
    int cnt = 0;
    while (dq.back() <= dq.front()) {
        dq.push_front(dq.back());
        dq.pop_back();
        cnt++;
    }
    if (is_sorted(dq.begin(), dq.end())) {
        cout << cnt << endl;
    } else {
        cout << -1 << endl;
    }
}

signed main() {
    FAST_IO;
    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++) {
      // cout << "Case " << i << ": \n";
      solve();
    }
    return 0;
}