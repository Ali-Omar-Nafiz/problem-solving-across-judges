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



int countDigits(int n) {
    n = abs(n);
    if (n == 0) return 1;
    return (int)log10(n) + 1;
}

bool isvowel(char c) {
    if (c == 'a' || 
        c == 'e' ||
        c == 'i' ||
        c == 'o' ||
        c == 'u' ||
        c == 'y' ||
        c == 'A' || 
        c == 'E' ||
        c == 'I' ||
        c == 'O' ||
        c == 'U' ||
        c == 'Y') {
        return true;
    }
    return false;
}
void solve() {
    string str;
    cin >> str;
    int n = str.length();
    for (int i = 0; i < n; i++) {
        if (isvowel(str[i])) {
            str.erase(str.begin() + i);
            n--;
            i--;
        } else {
            str.insert(str.begin() + i, '.');
            n++;
            i++;
        }
    }
    for (int i = 0; i < n; i++) {
        if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
    }
    cout << str;
}
signed main() {
    io();
      // testcase 
        solve();
    return 0;
}