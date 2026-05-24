#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

struct DNA{
    int n;
    string s;
    int idx, unsortedness;
    void input(int a, int b) {
        cin >> s;
        n = a;
        idx = b;
        int cnt = 0;
        for (int i = 0; i + 1 < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (s[j] < s[i]) {
                    cnt++;
                }
            }
        }
        unsortedness = cnt;
    }
    void output() {
        cout << s << endl;
    }
};

bool cmp(DNA a, DNA b) {
    if (a.unsortedness == b.unsortedness) {
        return a.idx < b.idx;
    } else {
        return a.unsortedness < b.unsortedness;
    }
}

void solve() {
    int n, m;
    cin >> n >> m;
    vector < DNA > v;
    for (int i = 0; i < m; i++) {
        DNA d;
        d.input(n, i);
        v.push_back(d);
    }
    sort(v.begin(), v.end(), cmp);
    for (int i = 0; i < v.size(); i++) {
        v[i].output();
    }
}

signed main() {
    FAST_IO;
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        if (i != 1) {
            cout << endl;
        }
        solve();
    }
    return 0;
}