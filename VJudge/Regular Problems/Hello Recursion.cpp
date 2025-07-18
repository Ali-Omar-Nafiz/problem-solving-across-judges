#include<bits/stdc++.h>
using namespace std;
int summation(int a);
vector<int>v;
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int n;
        cin>>n;
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        cout << "Case " << i << ": " << summation(n - 1) << "\n";
        v.clear();
    }
}
int summation(int a){
    if(a<0)return 0;
    return v[a]+summation(a-1);
}
//https://vjudge.net/problem/SPOJ-HRECURS
