#include <bits/stdc++.h>

using namespace std;

const int MOD = 1e9 + 7;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

vector < int > divCnt(1e6 + 1);

void harmonic() {
    for (int i = 1; i <= 1e6; i++) {
        for (int j = i; j <= 1e6; j += i) {
            divCnt[j]++;
        }
    }
}

void solve() {
    int a, b;
    cin >> a >> b;
    int gcd = __gcd(a, b);
    cout << divCnt[gcd] << endl;
}

signed main() {
    FAST_IO;
    harmonic();
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        // cout << "Case " << i << endl;
        solve();
    }
}