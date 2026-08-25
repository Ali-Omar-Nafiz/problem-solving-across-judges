#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  s = s + s;
  int cnt = 0, mxCnt = 0;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '0') {
      cnt++;
    } else {
      cnt = 0;
    }
    mxCnt = max(mxCnt, cnt);
  }
  cout << mxCnt << endl;
}

signed main() {
    FAST_IO;
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        solve();
    }
    return 0;
}