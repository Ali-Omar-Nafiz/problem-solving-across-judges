#include <bits/stdc++.h>
 
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

bitset < 10000001 > isNP;
vector < int > primes;

void sieve() {
    isNP[1] = 1, isNP[0] = 1;
    for (int i = 4; i <= 10000000; i += 2) {
        isNP[i] = 1;
    }
    for (int i = 3; i * i <= 10000000; i += 2) {
        if (!isNP[i]) {
            for (int j = i * i; j <= 10000000; j += (2 * i)) {
                isNP[j] = 1;
            }
        }
    }
    primes.push_back(2);
    for (int i = 3; i <= 10000000; i += 2) {
        if (!isNP[i]) {
            primes.push_back(i);
        }
    }
}

void solve() {
    int n;
    cin >> n;
    for (int i = 0; i < primes.size(); i++) {
        if (n % primes[i] == 0) {
            int p, q;
            if (n % (primes[i] * primes[i]) == 0) {
                p = primes[i];
                q = n / (p * p);
            } else {
                q = primes[i];
                p = sqrt(n / primes[i]);
            }
            cout << p << " " << q << endl;
            return;
        }
    }
}

signed main() {
    FAST_IO;
    sieve();
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        // cout << "#TestCase: " << i << endl << endl;
        solve();
    }
    return 0;
}