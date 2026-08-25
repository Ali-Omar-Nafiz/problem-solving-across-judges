#include <bits/stdc++.h>
 
using namespace std;

const int MOD = 1e9 + 7;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

bitset < 40000 > isNP;
vector < int > primes;

void sieve() {
    isNP[1] = 1;
    for (int i = 4; i < 40000; i += 2) {
        isNP[i] = 1;
    }
    for (int i = 3; i * i < 40000; i += 2) {
        if (!isNP[i]) {
            for (int j = i * i; j < 40000; j += (2 * i)) {
                isNP[j] = 1;
            }
        }
    }
    primes.push_back(2);
    for (int i = 3; i < 40000; i += 2) {
        if (!isNP[i]) {
            primes.push_back(i);
        }
    }
}

int fastPow(int a, int p) // find a to the power p
{
    if(p == 0) return 1;
    if(p == 1) return a;
    // a^10 = a^5 * a^5
    // a^11 = a^5 * a^5 * a
    int x = fastPow(a, p / 2);
    x = x * x % MOD;
    if(p & 1) x = x * a % MOD;
    return x;
}

void solve() {
    int x, n;
    cin >> x >> n;
    int ans = 1;
    for (auto &p: primes) {
        if (x % p != 0) {
            continue;
        }
        int pw = p;
        int sum = 0;
        while (1) {
            sum += (n / pw);
            if (pw > (n / p)) {   // if (pw * p > n) to handle overflow
                break;
            }
            pw *= p;
        }
        ans *= fastPow(p, sum);
        ans %= MOD;
        while (x % p == 0) {
            x /= p;
        }
    }
    if (x > 1) {
        int pw = x;
        int sum = 0;
        while (1) {
            sum += (n / pw);
            if (pw > (n / x)) {
                break;
            }
            pw *= x;
        }
        ans *= fastPow(x, sum);
        ans %= MOD;
    }
    cout << ans << endl;
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