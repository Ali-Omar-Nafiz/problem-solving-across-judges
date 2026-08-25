#include <bits/stdc++.h>
 
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

bitset < 10000001 > isNP;
vector < int > primes;

void sieve() {
    isNP[1] = 1;
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
    int a, b, k;
    cin >> a >> b >> k;
    vector < int > mx(b + 1);
    for (int i = a; i <= b; i++) {
        int pos = lower_bound(primes.begin(), primes.end(), i) - primes.begin();
        if (pos + k - 1 > primes.size() - 1) {
            cout << -1 << endl;
            return;
        }
        int move = primes[pos + k - 1] - i + 1;
        mx[i] = move;
    }
    int maxx = mx[0];
    for (int i = 0; i <= b; i++) {
        maxx = max(maxx, mx[i]);
        mx[i] = maxx;
    }
    int ans = -1;
    for (int i = b, j = 1; i >= a; i--, j++) {
        if (mx[i] <= j) {
            ans = j;
            break;
        }
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