#include<bits/stdc++.h>
using namespace std;

using ll = long long;

const int M = 1e5, M2 = 2e5, OO = 1e9 + 7, MOD = 998244353;
const double PI = 2 * acos(0.0);

#define testcase int tc; cin >> tc; for (int i = 1; i <= tc; i++)
#define nline "\n"
#define all(v) v.begin(), v.end()
// #define int long long

void io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
}

long long ceil(long long a, long long b) {
    return (a + b - 1) / b;
}

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}



int stringToInt(string s) {
    int i = 0, ret = 0;
    bool neg = false;
    if (s[0] == '-') {
        neg = true;
        i = 1;
    }
    for (; i < (int)s.size(); i++) {
        ret = ret * 10 + (s[i] - '0');
    }
    return neg ? -ret : ret;
}

int countDigits(int n) {
    n = abs(n);
    if (n == 0) return 1;
    return (int)log10(n) + 1;
}
int count(string &s) {
    int count = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'a' ||
            s[i] == 'e' ||
            s[i] == 'i' ||
            s[i] == 'o' ||
            s[i] == 'u') {
            count++;
        }
    }
    return count;
}
void solve() {
    string ph1, ph2, ph3;
    getline(cin, ph1);
    getline(cin, ph2);
    getline(cin, ph3);
    sort(all(ph1));
    sort(all(ph2));
    sort(all(ph3));
    int count1 = count(ph1);
    int count2 = count(ph2);
    int count3 = count(ph3);
    if (count1 != 5 || count2 != 7 || count3 != 5) {
        cout << "NO" << nline;
    } else {
        cout << "YES" << nline;
    }
}
signed main() {
    io();
      // testcase 
        solve();
    return 0;
}