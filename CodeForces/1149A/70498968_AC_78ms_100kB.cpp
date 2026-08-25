#include <bits/stdc++.h>
 
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

void solve() {
    int n;
    cin >> n;
    map < int, int > mp;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        mp[x]++;
    }
    if (mp[2] != 0) {
        cout << 2 << " ";
        mp[2]--;
    }
    if (mp[1] != 0) {
        cout << 1 << " ";
        mp[1]--;
    }
    while (mp[2] != 0) {
        cout << 2 << " ";
        mp[2]--;
    }
    while (mp[1] != 0) {
        cout << 1 << " ";
        mp[1]--;
    }
    cout << endl;
}

signed main() {
    FAST_IO;
    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++) {
        // cout << "#TestCase: " << i << endl << endl;
        solve();
    }
    return 0;
}