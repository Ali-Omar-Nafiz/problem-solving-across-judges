#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define int long long

int n, ans = 0;
vector < int > v;

void merge(int l, int r) {
    int mid = (l + r) / 2;
    vector < int > tmpL, tmpR;
    for (int i = l; i <= mid; i++) {
        tmpL.push_back(v[i]);
    }
    for (int i = mid + 1; i <= r; i++) {
      tmpR.push_back(v[i]);  
    }
    int currIndex = l;
    int L = 0, R = 0;
    while (L < tmpL.size() && R < tmpR.size()) {
        if (tmpL[L] < tmpR[R]) {
            v[currIndex++] = tmpL[L++];
            ans++;
        } else {
            v[currIndex++] = tmpR[R++];
            ans++;
        }
    }
    while(L < tmpL.size()) {
        v[currIndex++] = tmpL[L++];
        ans++;
    }
    while (R < tmpR.size()) {
        v[currIndex++] = tmpR[R++];
        ans++;
    }
}

void devide(int l, int r, int key) {
    if (l == r) {
        return;
    }
    int mid = (l + r) / 2;
    devide(l, mid, 2 * key);
    devide(mid + 1, r, 2 * key + 1);
    merge(l, r);
}

void solve() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int s;
        cin >> s;
        v.push_back(s);
    }
    devide(0, n - 1, 1);
    for (int i = 0; i < v.size(); i++) {
        if (i == v.size() - 1) {
            cout << v[i];
        } else {
            cout << v[i] << " ";
        }
    }
    cout << "\n";
    cout << ans << "\n";
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