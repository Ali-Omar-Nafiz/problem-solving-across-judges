#include <iostream>
using namespace std;

int main() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    __int128 product = (__int128)a * b * c * d;

    int second_last = (product / 10) % 10;
    int last = product % 10;

    cout << second_last << last << endl;

    return 0;
}
