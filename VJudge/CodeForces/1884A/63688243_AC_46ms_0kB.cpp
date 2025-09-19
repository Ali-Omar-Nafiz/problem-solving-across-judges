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
bool isBeautiful(int x, int k) {
	int sumOfTheDigit = 0;
	for (int i = x; i > 0; i /= 10) {
		int lastDigit = i % 10;
		sumOfTheDigit += lastDigit;
	}
	if (sumOfTheDigit % k == 0) {
		return true;
	} else {
		return false;
	}
}
 
void solve() {
	int x, k;
	cin >> x >> k;
	for (int i = x; ; i++) {
		if(isBeautiful(i, k)) {
			cout << i << '\n';
			return;
		}
	}
}
 
signed main() {
	io();
     testcase {
        solve();
     }
    return 0;
}