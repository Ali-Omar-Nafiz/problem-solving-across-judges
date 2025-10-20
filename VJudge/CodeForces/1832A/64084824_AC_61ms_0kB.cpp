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

int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
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

void solve() {
    string str;
    cin >> str;
    int n = str.length();
    int first = -1, second = -1;
    for (int i = 1; i < n; i++) {
        if (str[i] != str[i - 1]) {
            first = i;
            break;
        }
    }
    for (int i = n - 1; i > 0; i--) {
        if (str[i] != str[i - 1]) {
            second = i - 1;
            break;
        }
    }
    if (first == second) {
        cout << "NO" << nline;
    } else {
        cout << "YES" << nline;
    }
}
signed main() {
    io();
      testcase 
        solve();
    return 0;
}