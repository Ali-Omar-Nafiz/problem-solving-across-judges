#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n+1);
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    int index;
    cin>>index;
    v.erase(v.begin()+index);
    int low,high;
    cin>>low>>high;
    v.erase(v.begin()+low,v.begin()+high);
    cout<<v.size()-1<<"\n";
    for(auto it=v.begin()+1;it!=v.end();it++)cout<<*it<<" ";
    return 0;
}
//https://vjudge.net/problem/HackerRank-vector-sort