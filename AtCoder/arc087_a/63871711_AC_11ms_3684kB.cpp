#include<bits/stdc++.h>
using namespace std;

#define testcase int tc; cin >> tc; for (int i = 1; i <= tc; i++)
#define nline "\n"
#define all(v) v.begin(), v.end()
// #define int long long
using ll = long long;
const int M = 1e5, M2 = 2e5, OO = 1e9 + 7, MOD = 998244353;
const double PI = 2 * acos(0.0);
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
void solve() {
    int n;
    cin >> n;
    vector < int > v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(all(v));
    int count, remove = 0;
    for (int i = 0; i < n; i++) {
        count = 1;
        int temp = v[i];
        for (int j = i + 1; j < n; j++) {
            if (temp == v[j]) {
                count++;
            } else {
                break;
            }
            i++;
        }
        if (count < v[i]) {
            remove += count;
        } else if (count > v[i]) {
            remove += (count - v[i]);
        }
    }
    cout << remove;

}
signed main() {
    io();
      // testcase {
        solve();
      // }
    return 0;
}