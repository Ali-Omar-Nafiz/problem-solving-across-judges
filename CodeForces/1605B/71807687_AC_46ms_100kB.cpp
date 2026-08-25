#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define endl '\n'
#define int long long

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (is_sorted(s.begin(), s.end())) {
        cout << 0 << endl;
        return;
    }
    string t = s;
    sort(t.begin(), t.end());
    vector < int > idx;
    for (int i = 0; i < n; i++) {
        if (s[i] != t[i]) {
            idx.push_back(i + 1);
        }
    }
    cout << 1 << endl;
    cout << idx.size() << " ";
    for (auto x: idx) {
        cout << x << " ";
    }
    cout << endl;
}

signed main() {
    FAST_IO;
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
      // cout << "Case " << i << ": \n";
      solve();
    }
    return 0;
}