#include <bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

void solve() {
    int a, b;
    cin >> a >> b;
    int cntA = (a - 1) / 3;
    int cntB = b / 3;
    int total = cntB - cntA;
    total *= 2;
    if (a % 3 == 0) {
        total--;
    }
    if ((b + 1) % 3 == 0) {
        total++;
    }
    cout << total << endl;
}
//
signed main() {
    FAST_IO;
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cout << "Case " << i << ": ";
        solve();
    }
}