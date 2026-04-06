#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

#include <bits/stdc++.h>
using namespace std;

vector < string > grid;
map < int, int > col, ld, rd;
int ans = 0;

void fun(int r) {
    if (r >= 8) {
        ans++;
        return;
    }
    for (int c = 0; c < 8; c++) {
        if (grid[r][c] == '*') {
            continue;
        }
        if (col[c]) {
            continue;
        }
        if (ld[r - c]) {
            continue;
        }
        if (rd[r + c]) {
            continue;
        }
        col[c] = 1;
        ld[r - c] = 1;
        rd[r + c] = 1;
        fun(r + 1);
        col[c] = 0;
        ld[r - c] = 0;
        rd[r + c] = 0;
    }
}
void solve() {
    for (int i = 0; i < 8; i++) {
        string str;
        cin >> str;
        grid.push_back(str);
    }
    fun(0);
    cout << ans << endl;
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