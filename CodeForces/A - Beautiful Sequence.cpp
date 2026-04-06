#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int element;
		bool checker = false;
		for (int i = 1; i <= n; i++) {
			cin >> element;
			if (element <= i) {
				checker = true;
			}
		}
		if (checker == false) {
			cout << "NO" << endl;
		} else {
			cout << "YES" << endl;
		}
	}
	return 0;
}