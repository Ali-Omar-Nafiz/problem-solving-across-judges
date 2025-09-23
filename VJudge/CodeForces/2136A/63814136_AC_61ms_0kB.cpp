#include<bits/stdc++.h>
using namespace std;

#define testcase int tc; cin >> tc; for (int i = 1; i <= tc; i++)
#define nline "\n"
// #define int long long
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
bool isEven(int a) {
    if (a & 1) {
        return false;
    } else {
        return true;
    }
}
bool isOdd(int a) {
    return !(isEven(a));
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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int maxFH = max(a, b);
    int minFH = min(a, b);
    int maxSH = max((c - a), (d - b));
    int minSH = min((c - a), (d - b));
    // cout << maxFH << " " << minFH << " " << maxSH << " " << minSH << nline;
    if ((ceil)(maxFH / 2.0 - 1) <= minFH && (ceil)(maxSH / 2.0 - 1) <= minSH) {
        cout << "Yes" << nline ;
    } else {
        cout << "No" << nline;
    }
}

signed main() {
    io();
     testcase {
        solve();
     }
    return 0;
}