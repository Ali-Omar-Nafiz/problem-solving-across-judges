#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str, tmp;
    cin >> str;
    for (int i = str.length()-1; i >= 0; i--)
    {
        tmp += str[i];
    }
    cout<<((tmp==str)?"YES":"NO");
    return 0;
}
