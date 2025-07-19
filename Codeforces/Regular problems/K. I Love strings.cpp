#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
    string s1,s2,s3;
    cin>>s1>>s2;
    for(int i=0;i<((s1.length()>s2.length())?s1.length():s2.length());i++){
        if(i<s1.length())cout<<s1[i];
        if(i<s2.length())cout<<s2[i];
    }
    cout<<"\n";
}
    return 0;
}

