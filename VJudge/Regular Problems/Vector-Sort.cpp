#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin>>n;
    vector<int>sorted;
    for(int i=0;i<n;i++){
        cin>>x;
        if(i==0)sorted.push_back(x);
        else{
            int flag=1;
            for(int j=0;j<i;j++){
                if(sorted[j]>x){
                    flag=0;
                    sorted.insert(sorted.begin()+j,x);
                    break;
                }
            }
            if(flag)sorted.push_back(x);
        }
    }
    for(int x:sorted)cout<<x<<" ";
    return 0;
}
//https://vjudge.net/problem/HackerRank-vector-sort
