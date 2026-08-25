#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define endl '\n'
#define int long long

void solve() {
  int n, k, q;
  cin >> n >> k >> q;
  vector < int > dif(200005);
  while (n--) {
    int l, r;
    cin >> l >> r;
    dif[l]++;
    dif[r + 1]--;
  }
  for (int i = 1; i <= 200005; i++) {
    dif[i] += dif[i - 1];
  }
  for (int i = 1; i <= 200005; i++) {
    if (dif[i] >= k) {
      dif[i] = 1;
    } else {
      dif[i] = 0;
    }
    dif[i] += dif[i - 1];
  }
  while (q--) {
    int l, r;
    cin >> l >> r;
    cout << dif[r] - dif[l - 1] << endl;
  }
}

signed main() {
    FAST_IO;
    solve();
    return 0;
}