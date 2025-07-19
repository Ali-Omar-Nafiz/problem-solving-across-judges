#include <iostream>
using namespace std;

const int MOD = 1e9 + 7;

// Function to compute (base^exp) % mod using binary exponentiation
long long power(long long base, int exp) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % MOD;
        }
        base = (base * base) % MOD;
        exp /= 2;
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    cout << power(2, n) << endl;
    return 0;
}

