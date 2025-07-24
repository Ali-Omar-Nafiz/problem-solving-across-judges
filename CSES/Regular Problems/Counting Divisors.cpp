#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);
    int c,n;
    cin>>n;
    while(n--){
    cin>>c;
    vector<int>divisors;
    for(int i=1;i*i<=c;i++){
        if(c%i==0){
            if(c/i==i)divisors.push_back(i);
            else{
                divisors.push_back(i);
                divisors.push_back(c/i);
            }
        }
    }
    cout<<divisors.size()<<"\n";
    }
    return 0;
}

