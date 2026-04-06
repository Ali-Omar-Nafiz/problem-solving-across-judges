#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1, s2,temp;
    cin >> s1 >> s2;
    for(int i=s1.length()-1;i>=0;i--)
    {
        temp+=s1[i];
    }
    if (temp == s2) cout << "YES";
    else cout << "NO";
    return 0;
}