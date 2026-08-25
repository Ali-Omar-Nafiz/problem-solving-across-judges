#include <bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

void solve() {
    int n;
    cin >> n;
    vector < int > ans;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            int cnt = 0;
            while (n % i == 0) {
                n /= i;
                cnt++;
            }
            if (ans.empty()) {
                int cur = 1;
                for (int j = 0; j <= cnt; j++) {
                    ans.push_back(cur);
                    cur *= i;
                }
            } else {
                vector < int > tmp = ans;
                int cur = i;
                for (int j = 1; j <= cnt; j++) {
                reverse(tmp.begin(), tmp.end());
                    for (auto x: tmp) {
                        x *= cur;
                        ans.push_back(x);
                    }
                    cur *= i;
                }
            }
        }
    }
    if (n > 1) {
        int i = n, cnt = 1;
        if (ans.empty()) {
            int cur = 1;
            for (int j = 0; j <= cnt; j++) {
                ans.push_back(cur);
                cur *= i;
            }
        } else {
            vector < int > tmp = ans;
            int cur = i;
            for (int j = 1; j <= cnt; j++) {
            reverse(tmp.begin(), tmp.end());
                for (auto x: tmp) {
                    x *= cur;
                    ans.push_back(x);
                }
                cur *= i;
            }
        }
    }
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " \n"[i == ans.size() - 1];
    }
}

signed main() {
    FAST_IO;
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cout << "Case " << i << ":" << endl;
        solve();
    }
}