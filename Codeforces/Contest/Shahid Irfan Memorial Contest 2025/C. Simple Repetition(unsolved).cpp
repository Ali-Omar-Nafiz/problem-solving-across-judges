#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        long long int x;
        int k;
        cin >> x >> k;

        long long int org = x;
        for (int i = 1; i < k; i++) {
            long long int tem = org;
            int digits = 0;
            while (tem > 0) {
                digits++;
                tem /= 10;
            }

            long long int power = 1;
            for (int j = 0; j < digits; j++) {
                power *= 10;
            }

            x = x + x * power;
        }

        int prime = 1;
        if (x <= 1) prime = 0;
        else {
            for (long long int i = 2; i * i <= x; i++) {
                if (x % i == 0) {
                    prime = 0;
                    break;
                }
            }
        }

        cout << (prime ? "YES" : "NO") << "\n";
    }
    return 0;
}

