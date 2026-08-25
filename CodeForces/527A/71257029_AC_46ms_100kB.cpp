#include <bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

void solve() {
    int a, b;
    cin >> a >> b;
    if (a < b) {
        swap(a, b);
    }
    int ans = 0;
    while (a > 0 && b > 0) {
        int div = a / b;
        int rem = a % b;
        ans += div;
        a = rem;        
        if (a < b) {
            swap(a, b);
        }
    }
    cout << ans << endl;
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
