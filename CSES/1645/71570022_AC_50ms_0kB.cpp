#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define endl '\n'
#define int long long

void solve() {
  int n;
  cin >> n;
  stack < int > stk;
  vector < int > v(n + 1), ans(n + 1);
  for (int i = 1; i <= n; i++) {
    cin >> v[i];
    while (!stk.empty()) {
      int t = stk.top();
      if (v[t] < v[i]) {
        ans[i] = t;
        break;
      }
      stk.pop();
    }
    if (stk.empty()) {
      ans[i] = 0;
    }
    stk.push(i);
  }
  for (int i = 1; i <= n; i++) {
    cout << ans[i] << " ";
  }
  cout << endl;
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