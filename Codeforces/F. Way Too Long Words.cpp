#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    string str;
    cin>>str;
    if(str.length()>10)cout<<str[0]<<(str.length()-2)<<str[str.length()-1]<<"\n";
    else cout<<str<<"\n";
    }
    return 0;
}
