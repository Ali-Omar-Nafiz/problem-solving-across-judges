#include<bits/stdc++.h>
using namespace std;

#define testcase int tc; cin >> tc; for (int i = 1; i <= tc; i++)
#define nline "\n"
// #define int long long
using ll = long long;
const int M = 1e5, M2 = 2e5, OO = 1e9 + 7, MOD = 998244353;
const double PI = 2 * acos(0.0);
long long ceil(long long a, long long b) {
    return (a + b - 1) / b;
}
void io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}
bool isEven(int a) {
    if (a % 2 == 0) {
        return true;
    } else {
        return false;
    }
}
bool isOdd(int a) {
    return !(isEven(a));
}
void solve() {
    int a, b;
    cin >> a >> b;
    if (isEven(a) && isEven(b)) {
        cout << "Yes";
    } else if (isEven(a) && isOdd(b)) {
        if (a / 2 != b) {
            cout << "Yes";
        } else {
            cout << "No";
        }
    } else if (isOdd(a) && isEven(b)) {
        if (b / 2 != a) {
            cout << "Yes";
        } else {
            cout << "No";
        }
    } else {
        cout << "No";
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