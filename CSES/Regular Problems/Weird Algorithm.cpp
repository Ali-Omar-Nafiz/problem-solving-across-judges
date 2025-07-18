#include<bits/stdc++.h>
using namespace std;
long long int weirdAlgorithm(long long int n);
int main(){
    int n;
    cin>>n;
    weirdAlgorithm(n);
    return 0;
}
long long int weirdAlgorithm(long long int n){
    if(n==1){
        cout<<n;
        return 0;
    }
    cout<<n<<" ";
    if(!(n&1)){
        return weirdAlgorithm(n/2);
    }
    else{
        return weirdAlgorithm((n*3)+1);
    }
}

