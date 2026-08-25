#include <bits/stdc++.h>
 
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

bitset < 10000001 > isNP;
vector < int > primes;

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
    primes.push_back(2);
    for (int i = 3; i < 10000001; i += 2) {
        if (!isNP[i]) {
            primes.push_back(i);
        }
    }
}
 
void solve() {
    int l, r;
    cin >> l >> r;
    int ans = 0;
    for (int i = l; i <= r; i++) {
        int tmp = i;
        int cnt = 0;
        for (auto j: primes) {
            if (j * j > tmp) {
                break;
            }
            while (tmp % j == 0) {
                cnt++;
                tmp /= j;
            }
        }
        if (tmp > 1) {
            cnt++;
        }
        if (!isNP[cnt]) {
            ans++;
        }
    }
    cout << ans << endl;
}

signed main() {
    FAST_IO;
    int t = 1;
    sieve();
    // cin >> t;
    for (int i = 1; i <= t; i++) {
        // cout << "#TestCase: " << i << endl;
        solve();
    }
    return 0;
}