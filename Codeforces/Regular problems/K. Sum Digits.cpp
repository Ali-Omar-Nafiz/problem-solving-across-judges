#include<bits/stdc++.h>
using namespace std;
int main(){
    string input;
    int rubish,sum=0;
    cin>>rubish>>input;
    for(char c:input){
        sum+=(c-'0');
    }
    cout<<sum;
    return 0;
}
