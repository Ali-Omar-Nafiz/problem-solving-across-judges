#include <bits/stdc++.h>
using namespace std;
vector<int> v;
void PrintEvenIndices(int index);
int main() {
   int n;
   cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    PrintEvenIndices(0);
    return 0;
}
void PrintEvenIndices(int index){
    if(index>=v.size())return;
    PrintEvenIndices(index+2);
    if(index==0)cout<<v[index];
    else cout<<v[index]<<" ";  
}
