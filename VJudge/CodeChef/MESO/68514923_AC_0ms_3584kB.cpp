#include <bits/stdc++.h>
 
using namespace std;
using ll = long long;
 
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long
 
bool cmp(pair < int , vector < int > > a, pair < int, vector < int > > b) {
    return a.first < b.first;
}
 
vector < pair < int, vector < int > > > lst;
 
void mergeSort(int l, int r, vector < int > &v, int callNo) {
    vector < int > v1;
    for (int i = l; i <= r; i++) {
        v1.push_back(v[i]);
    }
    lst.push_back({callNo, v1});
    if (r - l + 1 <= 1) {
        return;
    }
    int mid = (l + r) / 2;
    mergeSort(l, mid, v, callNo * 2);
    mergeSort(mid + 1, r, v, callNo * 2 + 1);
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
    int n;
    cin >> n;
    vector < int > v;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    mergeSort(0, n - 1, v, 1);
    sort(lst.begin(), lst.end(), cmp);
    int prsnCnt = 1;
    for (auto [x, y]: lst) {
        cout << prsnCnt++ << " person is given with these numbers :";
        for (auto z: y) {
            cout << z << " ";
        }
        cout << endl;
    }
    cout << "After Sorting the elements are :";
    for (auto x: v) {
        cout << " " << x;
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