#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

int check(int x, int n, int k) {
    int a = ((x + 1) * k) + ((x * (x + 1)) / 2);
    int b = (n * k) + (((n - 1) * n) / 2);
    b -= a;
    return (a - b);
}

void solve() {
    int n, k;
    cin >> n >> k;
    int l = 0, r = n;
    int ans = -1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (check(mid, n, k) <= 0) {
            ans = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    int sol = min(abs(check(ans, n, k)), abs(check(ans + 1, n, k)));
    cout << sol << endl;
}

signed main() {
    FAST_IO;
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        // cout << "Case " << i << ": " << endl;
        solve();
    }
    return 0;
}