#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>divisors;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            if(n/i==i)divisors.push_back(i);
            else{
                divisors.push_back(i);
                divisors.push_back(n/i);
            }
        }
    }
    sort(divisors.begin(),divisors.end());
    for(auto a:divisors)cout<<a<<"\n";
    return 0;
}