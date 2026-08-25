#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int n;
	cin >> n;
	map < int, int > mp;
	for (int i = 0; i < n; i++) {
	    int a, b;
	    cin >> a >> b;
	    mp[a]++;
	    mp[b]--;
	}
	int ans = LLONG_MIN;
	int cur = 0;
	for (auto [x, y]: mp) {
	    cur += y;
	    ans = max(ans, cur);
	}
	cout << ans << endl;
}