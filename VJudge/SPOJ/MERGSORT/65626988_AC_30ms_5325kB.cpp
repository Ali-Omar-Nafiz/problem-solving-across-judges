#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define int long long

int n;
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
        } else {
            v[currIndex++] = tmpR[R++];
        }
    }
    while(L < tmpL.size()) {
        v[currIndex++] = tmpL[L++];
    }
    while (R < tmpR.size()) {
        v[currIndex++] = tmpR[R++];
    }
}

void devide(int l, int r) {
    if (l == r) {
        return;
    }
    int mid = (l + r) / 2;
    devide(l, mid);
    devide(mid + 1, r);
    merge(l, r);
}

void solve() {
    int x;
    while(cin >> x) {
        v.push_back(x);
    }
    devide(0, v.size() - 1);
    for (auto x : v) {
        cout << x << " ";
    }
    cout << "\n";
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