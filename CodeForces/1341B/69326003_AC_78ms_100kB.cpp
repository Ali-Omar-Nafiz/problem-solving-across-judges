#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
// #define int long long

bool cmp(pair < int, int > a, pair < int, int > b) {
    if (a.first == b.first) {
        return a.second < b.second;
    } else {
        return a.first > b.first;
    }
}

void solve() {
    int n, k;
    cin >> n >> k;
    vector < int > v(n + 1), peak(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }
    for (int i = 2; i + 1 <= n; i++) {
        if (v[i] > v[i - 1] && v[i] > v[i + 1]) {
            peak[i] = peak[i - 1] + 1;
        } else {
            peak[i] = peak[i - 1];
        }
    }
    vector < pair < int, int > > ans;
    int x = peak[k - 1] - peak[1];
    ans.push_back({x + 1, 1});
    for (int i = 1; i <= n - k; i++) {
        x = peak[i + k - 1] - peak[i + 1];
        ans.push_back({x + 1, i + 1});
    }
    sort(ans.begin(), ans.end(), cmp);
    cout << ans[0].first << " " << ans[0].second << endl;
}

signed main() {
    FAST_IO;
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        // cout << "#TestCase: " << i << endl;
        solve();
    }
}