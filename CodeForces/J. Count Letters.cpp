#include <iostream>
#include <string>
using namespace std;

int main()
{
    string S;
    getline(cin, S);
    int count[26] = {0};

    for (char c : S)
    {
        if (c >= 'a' && c <= 'z')
        {
            count[c - 'a']++;
        }
    }

    for (int i = 0; i < 26; ++i)
    {
        if (count[i] > 0)
        {
            char letter = 'a' + i;
            cout << letter << " : " << count[i] << endl;
        }
    }

    return 0;
}
