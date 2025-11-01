#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;

const int M = 1e5;
const int M2 = 2e5;
const int OO = 1e9 + 7;
const ll MOD = 998244353;
const double PI = 2 * acos(0.0);

#define testcase int tc; cin >> tc; for (int i = 1; i <= tc; i++)
#define nline "\n"
#define all(v) v.begin(), v.end()
#define int long long
#define PQ priority_queue

void io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
}

ll ceilDiv(ll a, ll b) {
    return (a + b - 1) / b;
}

double logBase(double a, double b) {
    return log2(a) / log2(b);
}

ll gcd(ll a, ll b) {
    return b == 0 ? a : gcd(b, a % b);
}

ll lcm(ll a, ll b) {
    return (a / gcd(a, b)) * b;
}

ll stringToLL(const string& s) {
    ll i = 0, ret = 0;
    bool neg = false;
    if (s[0] == '-') {
        neg = true;
        i = 1;
    }
    for (; i < (ll)s.size(); i++) {
        ret = ret * 10 + (s[i] - '0');
    }
    return neg ? -ret : ret;
}

int countDigits(ll n) {
    n = abs(n);
    if (n == 0) return 1;
    return (int)log10(n) + 1;
}

struct cmp {
    bool operator()(const pair<string, int> &a, const pair<string, int> &b) const {
        return a.second < b.second; // max-heap (higher priority on top)
    }
};

void solve() {
    priority_queue<pair<string, int>, vector<pair<string, int>>, cmp> pq;
    map<string, int> mp;

    string command;
    while (cin >> command) {
        if (command == "ADD") {
            string id;
            int priority;
            cin >> id >> priority;

            pq.push({id, priority});
            mp[id] = priority;
        }

        else if (command == "POP") {
            while (!pq.empty()) {
                auto top = pq.top();
                if (mp.count(top.first) && mp[top.first] == top.second) {
                    cout << top.first << " " << top.second << nline;
                    pq.pop();
                    mp.erase(top.first);
                    break;
                } else {
                    pq.pop();
                }
            }
        }

        else if (command == "CHANGE") {
            string id;
            int priority;
            cin >> id >> priority;

            mp[id] = priority;
            pq.push({id, priority});
        }
    }
}

signed main() {
    io();
    // testcase
        solve();
    return 0;
}