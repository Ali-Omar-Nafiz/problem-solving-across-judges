#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll c,k;
    cin>>c>>k;
    vector<ll>divisors;
    for(ll i=1;i*i<=c;i++){
        if(c%i==0){
            if(c/i==i)divisors.push_back(i);
            else{
                divisors.push_back(i);
                divisors.push_back(c/i);
            }
        }
    }
    if(divisors.size()<k)cout<<(-1);
    else{
    sort(divisors.begin(),divisors.end());
    cout<<divisors[k-1];
    }
    return 0;
}
//https://vjudge.net/problem/CodeForces-762A
