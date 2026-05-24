#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

struct Info {
    int age;
    string fNm;
    string lNm;
    int stnd;
    void input() {
        cin >> age >> fNm >> lNm >> stnd;
    }
    void output() {
        cout << age << " " << fNm << " " << lNm << " " << stnd << endl;
    }
};

void solve() {
    Info x;
    x.input();
    x.output();
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