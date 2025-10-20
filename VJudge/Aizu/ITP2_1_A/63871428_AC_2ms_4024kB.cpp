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
void pushBack(vector < int >& v, int x) {
    v.push_back(x);
}
void randomAccess(vector < int >& v, int i) {
    cout << v[i] << nline;
}
void popBack(vector<int>& v) {
    v.pop_back();
}
void solve() {
    int q;
    cin >> q;
    vector < int > v;
    int mode, x, p;
    for (int i = 0; i < q; i++) {
        cin >> mode;
        if (mode == 0) {
            cin >> x;
            pushBack(v, x);
        } else if (mode == 1) {
            cin >> p;
            if (v.size() != 0){
            randomAccess(v, p);
            }
        } else if (mode == 2) {
            if (v.size() != 0){
            popBack(v);
            }
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