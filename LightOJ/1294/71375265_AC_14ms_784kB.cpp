#include <bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

void solve() {
    int n, m;
    cin >> n >> m;
    m *= 2;
    int fBlock = (m * (m + 1) / 2);
    m /= 2;
    fBlock -= (2 *(m * (m + 1) / 2));
    int tBlock = n / (2 * m);
    int ans = fBlock * tBlock;
    cout << ans << endl;
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
