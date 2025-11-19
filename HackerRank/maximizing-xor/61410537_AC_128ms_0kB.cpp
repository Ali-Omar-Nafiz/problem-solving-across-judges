#include<bits/stdc++.h>
using namespace std;
int maximizingXor(int l,int r);
int main(){
     int l,r;
     cin>>l>>r;
     cout<<maximizingXor(l,r);
     return 0;
}
int maximizingXor(int l,int r){
    int max=l^r;
    for(int i=l;i<=r;i++){
        for(int j=i+1;j<=r;j++){
             if((i^j)>max)max=i^j;
        }
    }
    return max;
}