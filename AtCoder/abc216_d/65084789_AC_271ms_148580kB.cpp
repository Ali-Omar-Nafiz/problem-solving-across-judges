#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m;cin>>n>>m;
vector<queue<int>>a(m);vector<vector<int>>b(n);queue<int>q;
for(int i=0;i<m;i++){int k;cin>>k;while(k--){int x;cin>>x;a[i].push(x-1);}b[a[i].front()].push_back(i);}
for(int i=0;i<n;i++)if(b[i].size()==2)q.push(i);
while(q.size()){
int x=q.front();q.pop();
for(auto y:b[x]){
a[y].pop();
if(a[y].size()){
int z=a[y].front();
b[z].push_back(y);
if(b[z].size()==2)q.push(z);
}
}
}
for(auto &i:a)if(i.size()){cout<<"No";return 0;}
cout<<"Yes";
}