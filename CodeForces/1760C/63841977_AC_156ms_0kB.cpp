#include<bits/stdc++.h>
using namespace std;

#define testcase int tc; cin >> tc; for (int i = 1; i <= tc; i++)
#define nline "\n"
#define all(v) v.begin(), v.end()
#define int long long
using ll = long long;
const int M = 1e5, M2 = 2e5, OO = 1e9 + 7, MOD = 998244353;
const double PI = 2 * acos(0.0);
void io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}
long long ceil(long long a, long long b) {
    return (a + b - 1) / b;
}
int gcd(int a, int b) {
    int res = min(a, b);
    while (res > 1) {
        if (a % res == 0 && b % res == 0)
            break;
        res--;
    }
    return res;
}
int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}
void solve() {
    int n;
    cin >> n;
    vector < int > vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    int maxIndex = max_element(all(vec)) - vec.begin();
    int max = *max_element(all(vec));
    int secondMax = 0;
    for (int i = 0; i < n; i++) {
        if (vec[i] >= secondMax && maxIndex != i) {
            secondMax = vec[i];
        }
    }
    for (int i = 0; i < n; i++) {
        if (vec[i] == max) {
            vec[i] -= secondMax;
        } else {
            vec[i] -= max;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << vec[i] << " ";
    }
    cout << nline;
}

signed main() {
    io();
      testcase {
        solve();
      }
    return 0;
}