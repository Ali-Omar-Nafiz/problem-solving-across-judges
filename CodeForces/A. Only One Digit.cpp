#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    string input;
    while(t--){
        cin>>input;
        char min=input[0];
        for(auto c:input){
            if(c<min)min=c;
        }
        cout<<min<<"\n";
    }

    return 0;
}
