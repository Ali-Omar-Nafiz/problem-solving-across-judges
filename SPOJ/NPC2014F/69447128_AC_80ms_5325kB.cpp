#include <bits/stdc++.h>

using namespace std;
using ll = long long;
 
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long

bool check(vector < int > &freq, vector < int > &chk) {
    for (int i = 0; i < freq.size(); i++) {
        if (freq[i] < chk[i]) {
            return false;
        }
    }
    return true;
}
 
void solve() {
    int n;
    cin >> n;
    string str;
    cin >> str;
    int k;
    cin >> k;
    vector < int > chk(26);
    while (k--) {
        int x;
        char c;
        cin >> x >> c;
        chk[c - 'a'] = x;
    }
    vector < int > freq(26, 0);
    int l = 0;
    int ans = INT_MAX;
    for (int r = 0; r < n; r++) {
        freq[str[r] - 'a']++;
        while (freq[str[l] - 'a'] > chk[str[l] - 'a']) {
            freq[str[l] - 'a']--;
            l++;
        }
        if (check(freq, chk)) {
            ans = min(ans, r - l + 1);
        }
    }
    if (ans == INT_MAX) {
        cout << "Andy rapopo" << endl;
        return;
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
}