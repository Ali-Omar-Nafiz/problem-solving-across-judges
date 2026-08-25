#include <bits/stdc++.h>
 
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

bitset < 55556 > isNP;
vector < int > primes;

void sieve() {
    isNP[1] = 1;
    for (int i = 4; i < 55556; i += 2) {
        isNP[i] = 1;
    }
    for (int i = 3; i * i < 55556; i += 2) {
        if (!isNP[i]) {
            for (int j = i * i; j < 55556; j += (2 * i)) {
                isNP[j] = 1;
            }
        }
    }
    primes.push_back(2);
    for (int i = 3; i < 55556; i += 2) {
        if (!isNP[i] && (i % 5 == 1)) {
            primes.push_back(i);
        }
    }
}

void solve() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << primes[i] << " ";
    }
    cout << endl;
}

signed main() {
    FAST_IO;
    sieve();
    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++) {
        // cout << "Case " << i << ": " << endl;
        solve();
    }
    return 0;
}