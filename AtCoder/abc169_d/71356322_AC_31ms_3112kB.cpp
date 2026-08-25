#include <bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

int check(int n) {
    return (n * (n + 1) / 2);
}

void solve() {
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 2; i * i <= n; i++) {
        int cur = 0;
        while (n % i == 0) {
            n /= i;
            cur++;
        }
        int l = 0, r = 1e9, ans = -1;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (check(mid) <= cur) {
                ans = mid;
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        if (ans != -1) {
            cnt += ans;
        }
    }
    if (n > 1) {
        cnt++;
    }
    cout << cnt << endl;
}

signed main() {
    FAST_IO;
    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++) {
        // cout << "Case " << i << ": ";
        solve();
    }
}
