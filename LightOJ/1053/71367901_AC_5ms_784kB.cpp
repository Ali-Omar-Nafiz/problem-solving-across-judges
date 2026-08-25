#include <bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

void solve() {
    int a, b, c;
    cin >> a >> b >> c;
    if (b > a) {
        swap(a, b);
    }
    if (c > a) {
        swap(a, c);
    }
    if ((a * a) == ((b * b) + (c * c))) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
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
