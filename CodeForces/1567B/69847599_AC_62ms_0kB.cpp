#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

int xorr(int n) {
    if (n % 4 == 0) {
        return n;
    } else if (n % 4 == 1) {
        return 1;
    } else if (n % 4 == 2) {
        return (n + 1);
    } else {
        return 0;
    }
}
 
void solve() {
    int a, b;
    cin >> a >> b;
    int xxor = xorr(a - 1);
    if (xxor == b) {
        cout << a << endl;
    } else if ((xxor ^ a) == b) {
        cout << (a + 2) << endl;
    } else {
        cout << (a + 1) << endl;
    }
}

signed main() {
    FAST_IO;
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        solve();
    }
    return 0;
}