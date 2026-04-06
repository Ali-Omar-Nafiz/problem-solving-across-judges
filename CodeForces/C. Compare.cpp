#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;
    cin >> str1 >> str2;

    int len = min(str1.length(), str2.length());

    for (int i = 0; i < len; i++) {
        if (str1[i] != str2[i]) {
            cout << (str1[i] < str2[i] ? str1 : str2);
            return 0;
        }
    }
    cout << (str1.length() < str2.length() ? str1 : str2);
    return 0;
}
