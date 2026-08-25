#include <bits/stdc++.h>
 
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

bitset < 10000000 > isNP;

void sieve() {
    isNP[0] = 1, isNP[1] = 1;
    for (int i = 4; i < 10000000; i += 2) {
        isNP[i] = 1;
    }
    for (int i = 3; i * i < 10000000; i += 2) {
        if (!isNP[i]) {
            for (int j = i * i; j < 10000000; j += (2 * i)) {
                isNP[j] = 1;
            }
        }
    }
}
 
void solve() {
    int n;
    cin >> n;
    string s = to_string(n);
    sort(s.begin(), s.end());
    int cnt = 0;
    do {
        if (s[0] == '0') {
            continue;
        }
        int num = stoll(s);
        if (!isNP[num]) {
            cnt++;
        }
    } while (next_permutation(s.begin(), s.end()));
    cout << cnt << endl;
}

signed main() {
    FAST_IO;
    sieve();
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        // cout << "#TestCase: " << i << endl;
        solve();
    }
    return 0;
}