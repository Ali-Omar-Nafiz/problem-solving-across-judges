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
    int n, m;
    cin >> n >> m;

    int arr[n + 1][m + 1];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> arr[i][j];

    if (n == 1 && m == 1) {
        cout << -1 << nline;
        return;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i == n) {
                if (j == m) {
                    cout << arr[1][1] << " ";
                } else {
                    cout << arr[1][j + 1] << " ";
                }
                
            } else {
                if (j == m) {
                    cout << arr[i + 1][1] << " ";
                } else {
                    cout << arr[i + 1][j + 1] << " ";
                }
            }
        }
            cout << nline;        
    }
    cout << nline;
}

int main() {
    io();
    testcase {
        solve();
    }
    return 0;
}
