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
    // vector < vector < int > > v(6);
    // for (int i = 0; i < 6; i++) {
    //     int input;
    //     for (int j = 0; j < 6; j++) {
    //         cin >> input;
    //         v[i].push_back(input);
    //     }
    // }

    vector < vector < int > > v(6, vector < int >(6));    // The first 6  number of rows.
    for (int i = 0; i < 6; i++) {                         // The second 6  number of columns (inside each row).
        for (int j = 0; j < 6; j++) {
            cin >> v[i][j];
        }
    }
    int max = INT_MIN;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (hourglass(v, i, j) > max) {
                max = hourglass(v, i, j);
            }
        }
    }
    cout << max;
}
signed main() {
    io();
      // testcase {
        solve();
      // }
    return 0;
}