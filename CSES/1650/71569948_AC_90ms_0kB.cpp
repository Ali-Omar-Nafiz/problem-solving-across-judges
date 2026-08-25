#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define endl '\n'
#define int long long

void solve() {
  int n, q;
  cin >> n >> q;
  vector < int > v(n + 1);
  for (int i = 1; i <= n; i++) {
    cin >> v[i];
    v[i] ^= v[i - 1];
  }
  while (q--) {
    int l, r;
    cin >> l >> r;
    cout << (v[r] ^ v[l - 1]) << endl;
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