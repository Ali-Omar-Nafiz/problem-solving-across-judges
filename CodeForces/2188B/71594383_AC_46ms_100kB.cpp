#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl "\n"
#define int long long

void solve() {
    int n;
    cin >> n;
    string str;
    cin >> str;
    int cnt0 = 0;
    bool chk = false;
    for (int i = 0; i < n; i++) {
        if (str[i] == '1') {
            chk = true;
            break;
        }
    }
    if (chk == false) {
        if (n == 1) {
            str[0] = '1';
        } else {
            str[1] = '1';
        }
    }
    for (int i = 0; i < n; i++) {
        cnt0 = 0;
        if (str[i] == '1') {
            for (int j = i + 1; j < n; j++) {
                if (cnt0 >= 3) {
                    break;
                }
                if (str[j] == '0') {
                    cnt0++;
                } else {
                    break;
                }
            }
            if (cnt0 == 2) {
                if (i + 3 >= n) {
                    str[i + 2] = '1';
                }
            } else if (cnt0 == 3) {
                if (i + 4 >= n) {
                    str[i + 3] = '1';
                } else if (str[i + 4] == '0') {
                    str[i + 3] = '1';
                } else {
                    str[i + 2] = '1';
                }
            }
            cnt0 = 0;
        }
    }
    reverse(str.begin(), str.end());
    for (int i = 0; i < n; i++) {
        cnt0 = 0;
        if (str[i] == '1') {
            for (int j = i + 1; j < n; j++) {
                if (cnt0 >= 3) {
                    break;
                }
                if (str[j] == '0') {
                    cnt0++;
                } else {
                    break;
                }
            }
            if (cnt0 == 2) {
                if (i + 3 >= n) {
                    str[i + 2] = '1';
                }
            } else if (cnt0 == 3) {
                if (i + 4 >= n) {
                    str[i + 3] = '1';
                } else if (str[i + 4] == '0') {
                    str[i + 3] = '1';
                } else {
                    str[i + 2] = '1';
                }
            }
            cnt0 = 0;
        }
    }
    reverse(str.begin(), str.end());
    int cnt1 = 0;
    for (int i = 0; i < n; i++) {
        if (str[i] == '1') {
            cnt1++;
        }
    }
    cout << cnt1 << endl;
}
//
signed main() {
    FAST_IO;
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        solve();
    }
    return 0;
}