#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const int MOD = 1000000007;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

int mergeSort(int l, int r, vector < int > &v) {
    if (r - l + 1 <= 1) {
        return 0;
    }
    int mid = (l + r) / 2;
    int cnt1 = mergeSort(l, mid, v);
    int cnt2 = mergeSort(mid + 1, r, v);
    int n = r - l + 1;
    vector < int > tmp(n);
    int left = l, right = mid + 1;
    int cnt = cnt1 + cnt2;
    for (int i = 0; i < n; i++) {
        if (left > mid) {
            tmp[i] = v[right];
            right++;
            cnt++;
        } else if (right > r) {
            tmp[i] = v[left];
            left++;
            cnt++;
        } else {
            if (v[left] < v[right]) {
                tmp[i] = v[left];
                left++;
            } else {
                tmp[i] = v[right];
                right++;
            }
            cnt++;
        }
    }
    while (!tmp.empty()) {
        v[r--] = tmp.back();
        tmp.pop_back();
    }
    return cnt;
}

void solve() {
    int n;
    cin >> n;
    vector < int > v;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int ans = mergeSort(0, n - 1, v);
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " \n"[i == v.size() - 1];
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