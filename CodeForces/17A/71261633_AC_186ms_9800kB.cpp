#include <bits/stdc++.h>
using namespace std;

#define int long long

bitset < 10000001 > isNP;
vector < int > primes;

void sieve() {
    isNP[1] = true;
    for (int i = 4; i <= 10000000; i += 2) {
        isNP[i] = true;
    }
    for (int i = 3; i * i <= 10000000; i += 2) {
        if (!isNP[i]) {
            for (int j = i * i; j <= 10000000; j += (2 * i)) {
                isNP[j] = true;
            }
        }
    }
    primes.push_back(2);
    for (int i = 3; i <= 10000000; i++) {
        if (!isNP[i]) {
            primes.push_back(i);
        }
    }
}
///
signed main() {
    int t = 1;
    // cin >> t;
    sieve();
    for (int tc = 1; tc <= t; tc++) {
        int n, k;
        cin >> n >> k;
        int cnt = 0;
        for (int i = 0; i < primes.size(); i++) {
            if (primes[i] > n) {
                break;
            }
            for (int j = 0; j + 1 < primes.size(); j++) {
                if (primes[j] > primes[i]) {
                    break;
                }
                if (primes[j] + primes[j + 1] + 1 == primes[i]) {
                    cnt++;
                    break;
                }
            }
            if (cnt >= k) {
                cout << "YES" << endl;
                return 0;
            }
        }
        cout << "NO" << endl;
    }
    return 0;
}