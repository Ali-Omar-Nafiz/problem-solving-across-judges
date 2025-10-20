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
    string str;
    cin >> str;
    for (int i = 0; i < str.length(); i++) {
        if (i & 1) {
            if (str[i] == 'z') {
                str[i] = 'y';
            } else {
                str[i] = 'z';
            }
        } else {
            if (str[i] == 'a') {
                str[i] = 'b';
            } else {
                str[i] = 'a';
            }
        }
    }
    cout << str << nline;
}
signed main() {
    io();
      testcase 
        solve();
    return 0;
}