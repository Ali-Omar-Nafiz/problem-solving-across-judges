#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

void solve() {
    int n;
    cin >> n;
    vector < pair < int, int > > v;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }
    
    sort(v.begin(), v.end());
    
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            pair < int, int > c = {
                2 * v[j].first - v[i].first,
                2 * v[j].second - v[i].second
            };
            int lb = n;
            int low = 0, high = n - 1;
            while (low <= high) {
                int mid = low + (high - low) / 2;
                if (v[mid] >= c) {
                    lb = mid;
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            }
            int ub = n;
            low = 0, high = n - 1;
            while (low <= high) {
                int mid = low + (high - low) / 2;
                if (v[mid] > c) {
                    ub = mid;
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            }
            int occurrences = ub - lb;
            if (c.first == v[i].first && c.second == v[i].second) {
                occurrences--;
            }
            if (occurrences > 0) {
                cnt += occurrences;
            }
        }
    }
    cout << cnt << endl;
}

signed main() {
    FAST_IO;
    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++) {
        // cout << "Case " << i << ": " << endl;
        solve();
    }
    return 0;
}