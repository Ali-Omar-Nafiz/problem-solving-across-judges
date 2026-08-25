#include <bits/stdc++.h>
 
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

bitset < 10000001 > isNP;
vector < int > prePrimes(10000001);

void sieve() {
    isNP[0] = 1, isNP[1] = 1;
    for (int i = 4; i < 10000001; i += 2) {
        isNP[i] = 1;
    }
    for (int i = 3; i * i < 10000001; i += 2) {
        if (!isNP[i]) {
            for (int j = i * i; j < 10000001; j += (2 * i)) {
                isNP[j] = 1;
            }
        }
    }
    prePrimes[2] = 1;
    for (int i = 3; i < 10000001; i += 2) {
        if (!isNP[i]) {
            prePrimes[i] = 1;
        }
    }
    for (int i = 1; i < 10000001; i++) {
        prePrimes[i] += prePrimes[i - 1];
    }
}
 
void solve() {
    int l, r;
    cin >> l >> r;
    cout << prePrimes[r] - prePrimes[l - 1] << endl;
}

signed main() {
    FAST_IO;
    sieve();
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        // cout << "#TestCase: " << i << endl;
        solve();
    }
    return 0;
}