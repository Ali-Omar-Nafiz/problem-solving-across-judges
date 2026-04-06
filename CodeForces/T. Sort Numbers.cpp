#include<iostream>
using namespace std;
int main()
{
    int a,b,c,maxi,mini;
    cin>>a>>b>>c;
    if(a<=b && a<=c)
    {
        cout<<a<<endl;
        if(c<=b)cout<<c<<endl<<b<<endl<<endl;
        else cout<<b<<endl<<c<<endl<<endl;
    }
    else if(b<=a&&b<=c)
    {
        cout<<b<<endl;
          if(a<=c)cout<<a<<endl<<c<<endl<<endl;
        else cout<<c<<endl<<a<<endl<<endl;
    }
    else
    {

        cout<<c<<endl;
          if(a<=b)cout<<a<<endl<<b<<endl<<endl;
        else cout<<b<<endl<<a<<endl<<endl;
    }
    cout<<a<<endl<<b<<endl<<c;
    return 0;
}

