#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    cout << fixed << setprecision(9);
    double pi=3.141592653,r,a;
    cin>>r;
    a=pi*r*r;
    cout<<a;
    return 0;
}
