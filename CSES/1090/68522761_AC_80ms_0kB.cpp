#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const int MOD = 1000000007;

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
    int n = r - l + 1;
    vector < int > tmp(n);
    int left = l, right = mid + 1;
    for (int i = 0; i < n; i++) {
        if (left > mid) {
            tmp[i] = v[right];
            right++;
        } else if (right > r) {
            tmp[i] = v[left];
            left++;
        } else {
            if (v[left] < v[right]) {
                tmp[i] = v[left];
                left++;
            } else {
                tmp[i] = v[right];
                right++;
            }
        }
    }
    while (!tmp.empty()) {
        v[r--] = tmp.back();
        tmp.pop_back();
    }
}

void solve() {
    int n, x;
    cin >> n >> x;
    vector < int > v;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    mergeSort(0, n - 1, v);
    int ans = 0, l = 0, r = n - 1;
    while ((r - l + 1) > 0) {
        ans++;
        int sum = v[r];
        r--;
        if ((r - l + 1) > 0) {
            sum += v[l];
            if (sum <= x) {
                l++;
            }
        }
    }
    cout << ans << endl;
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