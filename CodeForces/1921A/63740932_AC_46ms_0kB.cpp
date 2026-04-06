#include<bits/stdc++.h>
using namespace std;

#define testcase int tc; cin >> tc; for (int i = 1; i <= tc; i++)
#define nline "\n"
// #define int long long
using ll = long long;
const int M = 1e5, M2 = 2e5, OO = 1e9 + 7, MOD = 998244353;
const double PI = 2 * acos(0.0);
long long ceil(long long a, long long b) {
    return (a + b - 1) / b;
}
void io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}
void solve() {
    int x1, x2, x3, x4, y1, y2, y3, y4;
    cin >> x1 >> y1 >> x2 >> y2;
    cin >> x3 >> y3 >> x4 >> y4;
    int a1, a2, b1, b2, side1, side2;
    int arr[4][2] = {
        {x1, y1},
        {x2, y2},
        {x3, y3},
        {x4, y4}
       };
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (arr[i][0] == arr[j][0]) {
                a1 = arr[i][0];
                b1 = arr[i][1];
                a2 = arr[j][0];
                b2 = arr[j][1];
                side1 = sqrt(pow(a1 - a2, 2) + pow(b1 - b2, 2));
                i = 4;
                break;
            }
        }
    }
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (arr[i][1] == arr[j][1]) {
                a1 = arr[i][0];
                b1 = arr[i][1];
                a2 = arr[j][0];
                b2 = arr[j][1];
                side2 = sqrt(pow(a1 - a2, 2) + pow(b1 - b2, 2));
                i = 4;
                break;
            }
        }
    }
    int area = side1 * side2;
    cout << area << nline;

}

signed main() {
    io();
     testcase {
        solve();
     }
    return 0;
}