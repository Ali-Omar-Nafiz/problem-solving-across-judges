#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

#include <bits/stdc++.h>
using namespace std;

vector<string> grid;

bool col[8];
bool diag1[15];
bool diag2[15];

int fun(int row) {
    // BASE CASE
    if (row == 8) {
        return 1;
    }
    int ways = 0;
    for (int c = 0; c < 8; c++) {
        if (grid[row][c] == '*') continue;
        if (col[c] || diag1[row+c] || diag2[row-c+7]) continue;
        col[c] = true;
        diag1[row+c] = true;
        diag2[row-c+7] = true;
        // TRUST: fun(row+1) correctly places queens in next rows
        ways += fun(row + 1);
        col[c] = false;
        diag1[row+c] = false;
        diag2[row-c+7] = false;
    }
    return ways;
}

void solve() {
    grid.resize(8);
    for (int i = 0; i < 8; i++)
        cin >> grid[i];

    cout << fun(0) << endl;
}
signed main() {
    FAST_IO;
    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++) {
        // cout << "#TestCase: " << i << endl;
        solve();
    }
    return 0;
}