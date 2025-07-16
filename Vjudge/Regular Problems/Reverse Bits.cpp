#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        unsigned int n;
        cin >> n;
        unsigned int rev = 0;  // To store reversed bits

        for (int i = 0; i < 32; i++) {
            if (n & (1 << i)) {
                rev |= (1 << (31 - i));  // Set the mirrored bit
            }
        }
        cout << rev << '\n';
    }
    return 0;
}
