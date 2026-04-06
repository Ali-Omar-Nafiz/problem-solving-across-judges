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

int hourglass(vector < vector < int > > v, int i, int j) {
    int sum = v[i][j] + v[i][j + 1] + v[i][j + 2] + v[i + 2][j] + v[i + 2][j + 1] + v[i + 2][j + 2] + v[i + 1][j + 1];
    return sum;
}
void solve() {
    int n, m;
    cin >> n >> m;
    vector < int > freq(n + 1);
    vector < int > fn(m + 1);
    vector < char > mf(m + 1);
    for (int i = 1; i <= m; i++) {
        cin >> fn[i];
        cin >> mf[i];
    }
    for (int i = 1; i <= m; i++) {
        if (freq[fn[i]] == 0 && mf[i] == 'M') {
            cout << "Yes" << nline;
            freq[fn[i]]++;
        } else {
            cout << "No" << nline;
        }
    }
}
signed main() {
    io();
      // testcase {
        solve();
      // }
    return 0;
}