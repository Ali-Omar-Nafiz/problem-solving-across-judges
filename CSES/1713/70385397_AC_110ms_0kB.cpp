#include <bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

vector < int > divCnt(1e6 + 1);

void solve() {
    for (int i = 1; i <= 1e6; i++) {
        for (int j = i; j <= 1e6; j += i) {
            divCnt[j]++;
        }
    }
    int n;
    cin >> n;
    while (n--) {
        int x;
        cin >> x;
        cout << divCnt[x] << endl;
    }
}

signed main() {
    FAST_IO;
    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++) {
        // cout << "#TestCase: " << i << endl;
        solve();
    }
    return 0;
}