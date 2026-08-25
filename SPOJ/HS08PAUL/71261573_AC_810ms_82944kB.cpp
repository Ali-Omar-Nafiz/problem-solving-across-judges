#include <bits/stdc++.h>
 
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

vector < int > dblPSqr;
bitset < 10000001 > isNP;
vector < int > ans(10000001);

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
}

bool pSqr(int n) {
    int sqN = sqrtl(n);
    if ((sqN * sqN) == n) {
        return true;
    } else {
        return false;
    }
}

bool dPSqr(int n) {
    int sqN = sqrtl(n);
    if (pSqr(sqN) && (sqN * sqN) == n) {
        return true;
    } else {
        return false;
    }
}

void storeAns() {
    for (int i = 1; i <= 10000000; i++) {
        if (!isNP[i]) {
            for (int j = 0; j < dblPSqr.size() && dblPSqr[j] <= i; j++) {
                int a = dblPSqr[j];
                int b = i - a;
                if (pSqr(b)) {
                    ans[i] = 1;
                    break;
                }
            }
        }
    }
    for (int i = 1; i <= 10000000; i++) {
        ans[i] += ans[i - 1];
    }
}

void solve() {
    int n;
    cin >> n;
    cout << ans[n] << endl;
}
//
signed main() {
    FAST_IO;
    int t = 1;
    sieve();
    for (int i = 0; i <= 10000000; i++) {
        if (dPSqr(i)) {
            dblPSqr.push_back(i);
        }
    }
    storeAns();
    cin >> t;
    for (int i = 1; i <= t; i++) {
        // cout << "Case " << i << ": " << endl;
        solve();
    }
    return 0;
}