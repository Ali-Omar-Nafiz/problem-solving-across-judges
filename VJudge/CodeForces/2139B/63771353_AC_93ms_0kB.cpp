#include<bits/stdc++.h>
using namespace std;

#define testcase int tc; cin >> tc; for (int i = 1; i <= tc; i++)
#define nline "\n"
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
void solve() {
    int n, m;
    cin >> n >> m;
    vector < int > vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    sort(vec.begin(), vec.end());
    int totalCake = 0;
    if (m > n) {
        for (int i = 0; i < n; i++) {
        totalCake += vec[i] * (m - n + i + 1);
        }
    } else {
        for (int i = n - m; i < n; i++) {
        totalCake += vec[i] * (m - n + i + 1);
        }
    }
    
    cout << totalCake << nline;
}

signed main() {
    io();
     testcase {
        solve();
     }
    return 0;
}