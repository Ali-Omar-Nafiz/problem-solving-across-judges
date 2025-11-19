#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int n, count = 1;
    cin >> n;
    string str[n];
    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
        if (i > 0 && str[i - 1] != str[i])
            count++;
    }
    printf("%d", count);
    return 0;
}