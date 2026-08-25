#include <bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

int diagonal(int i) {
    return (i * i) - i + 1;
}

void solve() {
    int n;
    cin >> n;
    int l = 0, r = sqrt(n) + 5, ans = -1, val = -1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        int d = diagonal(mid);
        if (d <= n) {
            ans = mid;
            val = d;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    int small = val - ans + 1;
    int large = val + ans - 1;
    int x, y;
    if (n <= large && n >= small) {
        if (ans & 1) {
            if (n >= val) {
                y = ans;
                x = ans - (n - val);
            } else {
                x = ans;
                y = ans - (val - n);
            }
        } else {
            if (n < val) {
                y = ans;
                x = ans - (val - n);
            } else {
                x = ans;
                y = ans - (n - val);
            }
        }
    } else {
        l = 0, r = sqrt(n) + 5, ans = -1, val = -1;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            int d = diagonal(mid);
            if (diagonal(mid) >= n) {
                ans = mid;
                val = d;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        if (ans & 1) {
            if (n >= val) {
                y = ans;
                x = ans - (n - val);
            } else {
                x = ans;
                y = ans - (val - n);
            }
        } else {
            if (n < val) {
                y = ans;
                x = ans - (val - n);
            } else {
                x = ans;
                y = ans - (n - val);
            }
        }
    }
    cout << x << " " << y << endl;
}

signed main() {
    FAST_IO;
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cout << "Case " << i << ": ";
        solve();
    }
}
