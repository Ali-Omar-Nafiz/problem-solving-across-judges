#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define endl '\n'
#define int long long

map < string, vector < string > > adjList;
map < string, int > color;

bool chk;

void dfs(string s) {
    color[s] = 1;
    for (auto a: adjList[s]) {
        if (color[a] == 0) {
            dfs(a);
        } else if (color[a] == 1) {
            chk = true;
        }
    }
    color[s] = 2;
}

void solve() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string a, b;
        cin >> a >> b;
        adjList[a].push_back(b);
    }
    for (auto [x, y]: adjList) {
        if (color[x] == 0) {
            dfs(x);
        }
    }
    if (chk) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }
    adjList.clear();
    color.clear();
    chk = false;
}
//
signed main() {
    FAST_IO;
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
      cout << "Case " << i << ": ";
      solve();
    }
    return 0;
}