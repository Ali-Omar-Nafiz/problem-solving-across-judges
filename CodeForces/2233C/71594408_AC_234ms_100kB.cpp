#include <bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

int check(string s) {
    int cnt = 0;
    stack < char > stk;
    for (auto x: s) {
        if (x == '(') {
            stk.push('(');
        } else if (x == ')') {
            if (!stk.empty()) {
                cnt += 2;
                stk.pop();
            }
        }
    }
    return cnt;
}

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    if (k == 0) {
        for (int i = 0; i < n; i++) {
            cout << 0;
        }
        cout << endl;
        return;
    }
    string ans = "";
    int mn = INT_MAX;
    for (int i = 0; i <= k; i++) {
        string t = s;
        int chk = i;
        int idx = 0;
        while (idx < n && chk > 0) {
            if (s[idx] == '(') {
                t[idx] = '.';
                chk--;
            }
            idx++;
        }
        chk = k - i;
        idx = n - 1;
        while (idx >= 0 && chk > 0) {
            if (s[idx] == ')') {
                t[idx] = '.';
                chk--;
            }
            idx--;
        }
        int val = check(t);
        if (val < mn) {
            mn = val;
            ans = t;
        }
    }
    for (auto x: ans) {
        if (x == '.') {
            cout << 1;
        } else {
            cout << 0;
        }
    }
    cout << endl;
}
/////
signed main() {
    FAST_IO;
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        solve();
    }
    return 0;
}