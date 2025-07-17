#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int count = 0;

        for (int i = 0; i <= n - k; ) {
            bool good = true;
            for (int j = 0; j < k; ++j) {
                if (a[i + j] == 1) {
                    good = false;
                    break;
                }
            }

            if (good) {
                count++;
                i += k + 1;
            } else {
                i++;
            }
        }

        cout << count << "\n";
    }

    return 0;
}

