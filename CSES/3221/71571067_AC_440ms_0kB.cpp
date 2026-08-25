#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define endl '\n'
#define int long long

vector < int > v;

void solve() {
  int n, k;
  cin >> n >> k;
  int x, a, b, c;
  cin >> x >> a >> b >> c;
  v.assign(n + 1, 0);
  v[1] = x;
  for (int i = 2; i <= n; i++) {
    v[i] = ((a * v[i - 1]) + b) % c;
  }
  int l = 1;
  int ans = 0;
  deque < pair < int, int > > dq;
  for (int r = 1; r <= n; r++) {
    while (!dq.empty() && dq.back().first > v[r]) {
      dq.pop_back();
    }
    dq.push_back({v[r], r});
    while (!dq.empty() && dq.front().second < l) {
      dq.pop_front();
    }
    if (r - l + 1 == k) {
      ans ^= dq.front().first;
      l++;
    }
  }
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