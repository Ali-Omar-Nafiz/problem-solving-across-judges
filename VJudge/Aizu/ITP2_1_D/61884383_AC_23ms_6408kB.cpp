#include<bits/stdc++.h>
using namespace std;
void pushBack(vector<int> &v,int z){
    v.push_back(z);
}
void dump(vector<int> &v){
    if(v.empty())cout<<"\n";
    else{
        for(int i=0;i<v.size();i++){
            if(i)cout<<" ";
            cout<<v[i];
        }
        cout<<"\n";
    }
}
void clear(vector<int> &v){
    v.clear();
}
int main(){
    int n,q;
    cin>>n>>q;
    vector<vector<int>>v1(n);
    int x,y,z;
    for(int i=0;i<q;i++){
        cin>>x>>y;
        if(x==0){
            cin>>z;
            pushBack(v1[y],z);
        }
        else if(x==1){
            dump(v1[y]);
        }
        else if(x==2){
            clear(v1[y]);
        }
    }
    return 0;
}

//https://vjudge.net/problem/HackerRank-vector-erase