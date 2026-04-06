#include<iostream>
using namespace std;
int main()
{
    float n;
    cin>>n;
    if(n>0.0 && n<=25.0)cout <<"Interval [0,25]";
    else if(n>25.0 && n<=50.0)cout <<"Interval (25,50]";
    else if(n>50.0 && n<=75.0)cout <<"Interval (50,75]";
    else if(n>75.0 && n<=100.0)cout <<"Interval (75,100]";
    else cout<<"Out of Intervals";
    return 0;
}
