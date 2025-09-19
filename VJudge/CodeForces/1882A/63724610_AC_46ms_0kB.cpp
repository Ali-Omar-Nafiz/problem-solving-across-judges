#include <bits/stdc++.h>
using namespace std;

#define testcase int tc; cin >> tc; for (int _i = 1; _i <= tc; _i++)
#define nline "\n"

void io() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

void solve() {
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int initialValue = 1;
    for (int i = 0; i < n; i++) {
        if (a[i] == initialValue) {
            b[i] = ++initialValue;
        } else {
            b[i] = initialValue;
        }
        ++initialValue;
    }
    int maxOfB = *max_element(b, b + n);
    cout << maxOfB << nline;
}

int main() {
    io();
    testcase {
        solve();
    }
    return 0;
}
