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
void solve() {
	int n;
	cin >> n;
	int arr[n + 1];
	for(int i = 1; i <= n; i++) {
		arr[i] = i;
	}
	sort(&arr[1], &arr[n] + 1);
	reverse(&arr[1], &arr[n] + 1);
	for (int i = 1; i <= n; i++) {
		cout << arr[i] << " ";
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