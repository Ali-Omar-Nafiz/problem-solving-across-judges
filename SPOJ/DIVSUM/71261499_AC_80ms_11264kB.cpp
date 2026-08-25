#include <bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

vector < int > sumOfDiv(1e6 + 1);

void solve() {
    int n;
    cin >> n;
    cout << sumOfDiv[n] << endl;
}
//
signed main() {
    FAST_IO;
    int t = 1;
    for (int i = 1; i <= 1e6; i++) {
        for (int j = i + i; j <= 1e6; j += i) {
            sumOfDiv[j] += i;
        }
    }
    cin >> t;
    for (int i = 1; i <= t; i++) {
        // cout << "#TestCase: " << i << endl;
        solve();
    }
    return 0;
}