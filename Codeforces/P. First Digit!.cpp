#include<bits/stdc++.h>
using namespace std;
int main(){
    string input;
    cin>>input;
    cout<<(!((input[0]-'0')&1)?"EVEN":"ODD");
    return 0;
}
