#include<bits/stdc++.h>
using namespace std;
int solver(int x,int z);
int main(){
    int testCase;
    cin>>testCase;
    while(testCase--){
        int a,b;
        cin>>a>>b;
        cout<<(solver(a,b))<<"\n";
    }
    return 0;
}
int solver(int x,int z){
    if(x%z==0)return 0;
    else return z-(x%z);
  }