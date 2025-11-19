#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl "\n"
// #define int long long

int ans = 0;

void find(int totalCrates, int maxLoad) {
    if (totalCrates <= maxLoad) {
        ans++;
        return;
    }
    int half1, half2;
    if (totalCrates & 1) {
        find((int)totalCrates / 2, maxLoad);
        find((int)totalCrates / 2 + 1, maxLoad);
    } else {
        find(totalCrates / 2, maxLoad);
        find(totalCrates / 2, maxLoad);
    }
}

void solve() {
    int totalCrates, maxLoad;
    while (cin >> totalCrates >> maxLoad) {
        ans = 0;
        find(totalCrates, maxLoad);
        cout << ans << "\n";
    }
}
signed main() {
    FAST_IO;
    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++) {
        solve();
    }
    return 0;
}