#include <bits/stdc++.h>
using namespace std;

using ll = long long;

const int M = 1e5;
const int M2 = 2e5;
const int OO = 1e9 + 7;
const ll MOD = 998244353;
const double PI = 2 * acos(0.0);

#define testcase int tc; cin >> tc; for (int i = 1; i <= tc; i++)
#define int long long

int ceil(int a, int b) {
    return (a + b - 1) / b;
}

int stringToInt(const string& s) {
    int i = 0, ret = 0;
    bool neg = false;
    if (s[0] == '-') {
        neg = true;
        i = 1;
    }
    for (; i < (int)s.size(); i++) {
        ret = ret * 10 + (s[i] - '0');
    }
    return neg ? -ret : ret;
}

void solve() {
    int n;
    cin >> n;
    vector < pair < pair < int, int > , int > > a;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        a.push_back({{x, 0}, i});
        a.push_back({{y, 1}, i});
    }
    sort(a.begin(), a.end());
    priority_queue < int, vector < int > , greater < int > > pq;
    for (int i = 0; i < n; i++) {
        pq.push((i + 1));
    }
    vector < int > allocated_room(n);
    for (int i = 0; i < a.size(); i++) {
        if (a[i].first.second == 0) {
            allocated_room[a[i].second] = pq.top();
            pq.pop();
        } else {
            pq.push(allocated_room[a[i].second]);
        }
    }
    cout << *max_element(allocated_room.begin(), allocated_room.end()) << "\n";
    for (auto x : allocated_room) {
        cout << x << ' ';
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // testcase
        solve();
    return 0;
}