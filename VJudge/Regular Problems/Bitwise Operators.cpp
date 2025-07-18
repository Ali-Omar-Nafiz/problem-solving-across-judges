#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,And,Or,Xor,maxAnd=0,maxOr=0,maxXor=0;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
           And=i&j,Or=i|j,Xor=i^j;
           if(And<k&&And>maxAnd)maxAnd=And;
           if(Or<k&&Or>maxOr)maxOr=Or;
           if(Xor<k&&Xor>maxXor)maxXor=Xor;

        }
    }
    cout<<maxAnd<<endl<<maxOr<<endl<<maxXor;

    return 0;
}
//https://vjudge.net/problem/HackerRank-bitwise-operators-in-c
