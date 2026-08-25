#include <bits/stdc++.h>
 
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

bitset < 5263697 > isNP;
vector < int > primes;
vector < int > store;

void sieve() {
    isNP[1] = 1;
    for (int i = 4; i < 5263697; i += 2) {
        isNP[i] = 1;
    }
    for (int i = 3; i * i < 5263697; i += 2) {
        if (!isNP[i]) {
            for (int j = i * i; j < 5263697; j += (2 * i)) {
                isNP[j] = 1;
            }
        }
    }
    primes.push_back(2);
    for (int i = 3; i < 5263697; i += 2) {
        if (!isNP[i]) {
            primes.push_back(i);
        }
    }
    for (int i = 0; i < primes.size(); i++) {
        for (int j = i + 1; j < primes.size(); j++) {
            if (primes[i] * primes[j] > 10527449) {
                break;
            }
            store.push_back(primes[i] * primes[j]);
        }
    }
    sort(store.begin(), store.end());
}

void solve() {
    int k;
    cin >> k;
    cout << store[k - 1] << endl;
}

signed main() {
    FAST_IO;
    sieve();
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        // cout << "Case " << i << ": " << endl;
        solve();
    }
    return 0;
}