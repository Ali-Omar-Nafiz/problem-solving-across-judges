#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

int n;
vector < vector < int > > store;

void mergeSort(int l, int r, vector < int > &v, int d) {
    if (r - l + 1 <= 1) {
        store[d][l] = v[l];
        return;
    }
    int mid = (l + r) / 2;
    mergeSort(l, mid, v, d + 1);
    mergeSort(mid + 1, r, v, d + 1);
    int n = r - l + 1;
    vector < int > tmp(n);
    int left = l, right = mid + 1;
    for (int i = 0; i < n; i++) {
        if (left > mid) {
            tmp[i] = v[right++];
        } else if (right > r) {
            tmp[i] = v[left++];
        } else {
            if (v[left] < v[right]) {
                tmp[i] = v[left++];
            } else {
                tmp[i] = v[right++];
            }
        }
    }
    while (!tmp.empty()) {
        store[d][r] = tmp.back();
        v[r--] = tmp.back();
        tmp.pop_back();
    }
}

int fun(int l, int r, int d, int i, int j, int k) {
    if (r < i || l > j) {
        return 0;
    }
    if (l >= i && r <= j) {
        int idx = upper_bound(store[d].begin() + l, store[d].begin() + r + 1, k) - (store[d].begin() + l);
        return ((r - l + 1) - idx);
    }
    int mid = (l + r) / 2;
    return (fun(l, mid, d + 1, i, j, k) + fun(mid + 1, r, d + 1, i , j, k));
}

void solve() {
    cin >> n;
    store.assign(17, vector < int >(n, 0));
    vector < int > v;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    mergeSort(0, n - 1, v, 0);
    int q;
    cin >> q;
    while (q--) {
        int i, j, k;
        cin >> i >> j >> k;
        cout << fun(0, n - 1, 0, i - 1, j - 1, k) << endl;
    }
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