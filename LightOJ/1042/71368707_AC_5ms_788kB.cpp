#include <bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

void solve() {
    int n;
    cin >> n;
    for (int i = 0; i < 30; i++) {
        if ((n & (1ll << i)) && !(n & (1ll << (i + 1)))) {
            n ^= (1ll << i);
            n ^= (1ll << (i + 1));
            int cnt = 0;
            for (int j = i - 1; j >= 0; j--) {
                if (n & (1ll << j)) {
                    cnt++;
                    n ^= (1ll << j);
                }
            }
            for (int j = 0; cnt > 0; j++, cnt--) {
                n ^= (1ll << j);
            }
            cout << n << endl;
            return;
        }
    }
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
