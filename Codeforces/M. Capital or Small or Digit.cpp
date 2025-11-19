#include<iostream>
using namespace std;
int main()
{
    char a;
    cin>>a;
    if((a>='A'&&a<='Z'))
    {
        cout<<(a=a+32);
    }
    else
    {
        cout<<(a=a-32);
    }
    return 0;
}


