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
bool isPretty(int n) {
	int lastDigit = n % 10;
	if (lastDigit == 2 || lastDigit == 3 || lastDigit == 9) {
		return true;
	} else {
		return false;
	}
}
void solve() {
	int l, r;
	cin >> l >> r;
	int count = 0;
	for (int i = l; i <= r; i++) {
		if (isPretty(i)) {
			count++;
		}
	}
	cout << count << '\n';
}
 
signed main() {
	io();
     testcase {
        solve();
     }
    return 0;
}