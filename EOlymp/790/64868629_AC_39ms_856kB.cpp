#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;

const int M = 1e5;
const int M2 = 2e5;
const int OO = 1e9 + 7;
const ll MOD = 998244353;
const double PI = 2 * acos(0.0);

#define testcase int tc; cin >> tc; for (int i = 1; i <= tc; i++)
#define nline "\n"
#define all(v) v.begin(), v.end()
#define int long long

void io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

ll ceilDiv(ll a, ll b) {
    return (a + b - 1) / b;
}

double logBase(double a, double b) {
    return log2(a) / log2(b);
}

ll gcd(ll a, ll b) {
    return b == 0 ? a : gcd(b, a % b);
}

ll lcm(ll a, ll b) {
    return (a / gcd(a, b)) * b;
}

ll stringToLL(const string& s) {
    ll i = 0, ret = 0;
    bool neg = false;
    if (s[0] == '-') {
        neg = true;
        i = 1;
    }
    for (; i < (ll)s.size(); i++) {
        ret = ret * 10 + (s[i] - '0');
    }
    return neg ? -ret : ret;
}

int countDigits(ll n) {
    n = abs(n);
    if (n == 0) return 1;
    return (int)log10(n) + 1;
}

int isPowerOfTwo(int b) {
    if (b == 0) {
        return 0;
    } else if ((b & (b - 1)) == 0) {
        return 1;
    } else
        return 0;
}

void solve() {
    int option;
    set < pair < int, int > > st;
    while (cin >> option) {
        if (option == 0) {
            break;
        } else if (option == 1) {
            int k, p;
            cin >> k >> p;
            st.insert({p, k});
        } else if (option == 2) {
            if (st.size() == 0) {
                cout << 0 << nline;
            } else {
                cout << (*prev(st.end())).second << nline;
                st.erase(prev(st.end()));
            }
        } else if (option == 3) {
            if (st.size() == 0) {
                cout << 0 << nline;
            } else {
                cout << (*st.begin()).second << nline;
                st.erase(st.begin());
            }
        }
    }
}

signed main() {
    io();
    // testcase
        solve();
    return 0;
}

