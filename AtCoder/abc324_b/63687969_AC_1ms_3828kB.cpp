#include<bits/stdc++.h>
using namespace std;
 
#define testcase int tc; cin >> tc; for (int i = 1; i <= tc; i++)
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
void solve() {
	ll n;
	cin >> n;
	int l2n = log2(n);
	int l3n = log2(n) / log2(3);
	for (int i = 0; i <= l2n; i++) {
		for (int j = 0; j <= l3n; j++) {
			ll p2i = pow(2, i);
			ll p3j = pow(3, j);
			if(p2i * p3j == n) {
				cout << "Yes";
				return;
			}
		}
	}
	cout << "No";
}
 
signed main() {
	io();
    // testcase {
        solve();
    // }
    return 0;
}