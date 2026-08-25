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
    int ans = ceil(sqrt(n));
    int val = diagonal(ans);
    int x, y;
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
