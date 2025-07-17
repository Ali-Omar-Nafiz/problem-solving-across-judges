#include<bits/stdc++.h>
using namespace std;
int bitwiseAnd(int n,int k);
int main(){
     int t;
     cin>>t;
     while(t--){
        int n,k;
        cin>>n>>k;
     cout<<bitwiseAnd(n,k)<<"\n";
 }
     return 0;
}
int bitwiseAnd(int n,int k){
    int max=1&n;
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
             if((i&j)>max && (i&j)<k)max=i&j;
        }
    }
    return max;
}