#include <bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

vector < double > decimal(1e6 + 1);

void preCompute() {
    for (int i = 1; i <= 1e6; i++) {
        decimal[i] = log(i);
    }
    for (int i = 2; i <= 1e6; i++) {
        decimal[i] += decimal[i - 1];
    }
}

void solve() {
    int n, d;
    cin >> n >> d;
    int ans = floor(decimal[n] / log(d)) + 1;
    cout << ans << endl;
}

signed main() {
    FAST_IO;
    preCompute();
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cout << "Case " << i << ": ";
        solve();
    }
}
