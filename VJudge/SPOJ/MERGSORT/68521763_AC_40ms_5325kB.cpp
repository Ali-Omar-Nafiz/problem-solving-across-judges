#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

void mergeSort(int l, int r, vector < int > &v) {
    if (r - l + 1 <= 1) {
        return;
    }
    int mid = (l + r) / 2;
    mergeSort(l, mid, v);
    mergeSort(mid + 1, r, v);
    vector < int > tmp(r - l + 1);
    int x = l, y = mid + 1;
    for (int i = 0; i < tmp.size(); i++) {
        if (x > mid) {
            tmp[i] = v[y];
            y++;
        } else if (y > r) {
            tmp[i] = v[x];
            x++;
        } else {
            if (v[x] < v[y]) {
                tmp[i] = v[x];
                x++;
            } else {
                tmp[i] = v[y];
                y++;
            }
        }
    }
    for (int i = 0; i < tmp.size(); i++) {
        v[l + i] = tmp[i];
    }
}

void solve() {
    vector < int > v;
    int x;
    while (cin >> x) {
        v.push_back(x);
    }
    mergeSort(0, v.size() - 1, v);
    for (auto x: v) {
        cout << x << " ";
    }
    cout << endl;
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
///djkbhsik