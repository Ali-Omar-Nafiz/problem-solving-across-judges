#include <bits/stdc++.h>
 
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

bitset < 1000001 > isNP;

void sieve() {
    isNP[0] = 1, isNP[1] = 1;
    for (int i = 4; i < 1000001; i += 2) {
        isNP[i] = 1;
    }
    for (int i = 3; i * i < 1000001; i += 2) {
        if (!isNP[i]) {
            for (int j = i * i; j < 1000001; j += (2 * i)) {
                isNP[j] = 1;
            }
        }
    }
}

bool check(int n) {
    int s = sqrtl(n);
    if (s * s == n && !isNP[s]) {
        return true;
    } else {
        return false;
    }
}
 
void solve() {
    int n;
    cin >> n;
    while (n--) {
        int x;
        cin >> x;
        if (check(x)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}

signed main() {
    FAST_IO;
    sieve();
    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++) {
        // cout << "Case " << i << ": ";
        solve();
    }
    return 0;
}