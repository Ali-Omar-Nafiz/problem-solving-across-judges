#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x,value,randomAccess;
    cin>>n;
    vector<int>v1;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x==0){
            cin>>value;
            v1.push_back(value);
        }
        else if(x==1){
            cin>>randomAccess;
            cout<<v1[randomAccess]<<"\n";
        }
        else if(x==2)v1.pop_back();
    }
    return 0;
}