#include <bits/stdc++.h>

using namespace std;

const int MOD = 1e9 + 7;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

bitset < 201 > isNP;
vector < int > primes;
vector < bool > semiPrimes(201, false);

void sieve() {
    isNP[0] = isNP[1] = 1;
    for (int i = 4; i <= 200; i += 2) {
        isNP[i] = 1;
    }
    for (int i = 3; i * i <= 200; i += 2) {
        if (!isNP[i]) {
            for (int j = i * i; j <= 200; j += (2 * i)) {
                isNP[j] = 1;
            }
        }
    }
    primes.push_back(2);
    for (int i = 3; i <= 200; i += 2) {
        if (!isNP[i]) {
            primes.push_back(i);
        }
    }
}

void preCompute() {
    for (int i = 0; i < primes.size(); i++) {
        for (int j = i + 1; j < primes.size(); j++) {
            for (int k = 0; k < primes.size(); k++) {
                for (int l = k + 1; l < primes.size(); l++) {
                    int a = primes[i], b = primes[j], c = primes[k], d = primes[l];
                    if ((a * b) + (c * d) <= 200) {
                        semiPrimes[(a * b) + (c * d)] = true;
                    }
                }
            }
        }
    }
}

void solve() {
    int n;
    cin >> n;
    if (semiPrimes[n]) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

signed main() {
    FAST_IO;
    sieve();
    preCompute();
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        // cout << "Case " << i << ": ";
        solve();
    }
}
