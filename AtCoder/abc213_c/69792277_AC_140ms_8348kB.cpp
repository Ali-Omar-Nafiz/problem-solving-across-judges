#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

struct Point {
    int oR, oC;
    int nR, nC;
    int idx;
    void input(int x) {
        cin >> oR >> oC;
        idx = x;
    }
    void output() {
        cout << nR << " " << nC << endl;
    }
    void assignRow(int a) {
        nR = a;
    }
    void assignColumn(int b) {
        nC = b;
    }
};

bool cmp1(Point a, Point b) {
    return a.oR < b.oR;
}

bool cmp2(Point a, Point b) {
    return a.oC < b.oC;
}

bool cmp3(Point a, Point b) {
    return a.idx < b.idx;
}

void solve() {
    int h, w, n;
    cin >> h >> w >> n;
    vector < Point > v;
    for (int i = 0; i < n; i++) {
        Point x;
        x.input(i + 1);
        v.push_back(x);
    }
    sort(v.begin(), v.end(), cmp1);
    int r = 1;
    for (int i = 0; i < n; i++) {
        if (i != 0) {
            if (v[i - 1].oR != v[i].oR) {
                r++;
            }
        }
        v[i].assignRow(r);
    }
    sort(v.begin(), v.end(), cmp2);
    int c = 1;
    for (int i = 0; i < n; i++) {
        if (i != 0) {
            if (v[i - 1].oC != v[i].oC) {
                c++;
            }
        }
        v[i].assignColumn(c);
    }
    sort(v.begin(), v.end(), cmp3);
    for (int i = 0; i < n; i++) {
        v[i].output();
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