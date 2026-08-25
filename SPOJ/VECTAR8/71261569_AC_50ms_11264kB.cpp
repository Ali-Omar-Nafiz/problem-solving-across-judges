#include <bits/stdc++.h>
 
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

bitset < 1000001 > isNP;
vector < int > valid(1000001);

void sieve() {
    isNP[1] = 1;
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
    for (int i = 2; i < 1000001; i++) {
        if (!isNP[i]) {
            string s = to_string(i);
            bool chk = true;
            while (!s.empty()) {
                if (s[0] == '0') {
                    chk = false;
                    break;
                }
                int val = stoi(s);
                if (isNP[val]) {
                    chk = false;
                    break;
                }
                s.erase(s.begin());
            }
            if (chk) {
                valid[i] = 1;
            }
        }
    }
    for (int i = 1; i < 1000001; i++) {
        valid[i] += valid[i - 1];
    }
}

void solve() {
    int n;
    cin >> n;
    cout << valid[n] << endl;
}
//
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