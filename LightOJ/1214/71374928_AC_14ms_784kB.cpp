#include <bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

void solve() {
    string a;
    cin >> a;
    if (a[0] == '-') {
        a.erase(a.begin());
    }
    int b;
    cin >> b;
    string cur = "";
    for (int i = 0; i < a.size(); i++) {
        cur += a[i];
        int chk = stoll(cur);
        if (chk < b) {
            continue;
        } else {
            cur = "";
            cur = to_string(chk % b);
        }
    }
    int val = stoll(cur);
    if (val == 0) {
        cout << "divisible" << endl;
    } else {
        cout << "not divisible" << endl;
    }
}

signed main() {
    FAST_IO;
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cout << "Case " << i << ": ";
        solve();
    }
}
