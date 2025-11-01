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
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
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

void solve() {
    int n, q;
    cin >> n >> q;
    deque < pair < int, int > > stk;
    for (int i = n; i > 0; i--) {
        stk.push_front({i, 0});
    }
    int a, b;
    char c;
    for (int i = 0; i < q; i++) {
        cin >> a;
        if (a == 1) {
            cin >> c;
            int x = stk.front().first;
            int y = stk.front().second;
            if (c == 'R') {
                x++;
            } else if (c == 'L') {
                x--;
            } else if (c == 'U') {
                y++;
            } else if (c == 'D') {
                y--;
            }
            stk.push_front({x, y});
            stk.pop_back();
        } else if (a == 2) {
            cin >> b;
            cout << stk[b - 1].first << ' ' << stk[b - 1].second << nline;
        }
    }
    
}

signed main() {
    io();
    // testcase
        solve();
    return 0;
}