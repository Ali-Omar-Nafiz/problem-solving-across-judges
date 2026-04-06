#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a,b,c;
    cin>>a>>b;
    c=a+b;
    cout<<a.length()<<" "<<b.length()<<endl<<c<<endl;
    a[0]=a[0]+b[0];
    b[0]=a[0]-b[0];
    a[0]=a[0]-b[0];
    cout<<a<<" "<<b<<endl;

    return 0;
}
/*
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s1,s2;
    cin>>s1>>s2;
    cout<<s1.length()<<" "<<s2.length()<<"\n";
    cout<<(s1+s2)<<"\n";
    swap(s1[0],s2[0]);
    cout<<s1<<" "<<s2;
    return 0;
}
*/
/*
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    cout<<a.length()<<" "<<b.length()<<endl<<a<<b<<endl;
    a[0]=a[0]^b[0];
    b[0]=a[0]^b[0];
    a[0]=a[0]^b[0];
    cout<<a<<" "<<b<<endl;
 
    return 0;
}
*/
