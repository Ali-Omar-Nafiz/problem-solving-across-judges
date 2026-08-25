#include <bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

vector < int > fact(20);

void preCompute() {
    fact[0] = fact[1] = 1;
    for (int i = 2; i < 20; i++) {
        fact[i] = fact[i - 1] * i;
    }
}

void solve() {
    int n;
    cin >> n;
    vector < int > ans;
    int idx = 19;
    while (n > 0 && idx >= 0) {
        if (n >= fact[idx]) {
            ans.push_back(idx);
            n -= fact[idx];
        }
        idx--;
    }
    if (n != 0) {
        cout << "impossible" << endl;
    } else {
        sort(ans.begin(), ans.end());
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i];
            cout << (i == ans.size() - 1 ? "!\n" : "!+");
        }
    }
}

signed main() {
    FAST_IO;
    preCompute();
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cout << "Case " << i << ": ";
        solve();
    }
}
