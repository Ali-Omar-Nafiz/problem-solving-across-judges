#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int a,b;
    cin>>a>>b;
    int ans=a;
    vector<int> v(a);
    for(int i=0;i<a;i++){
        cin>>v[i];
        if(v[i]>b) ans++;
    }
 
    cout<<ans<<endl;
 
 return 0;
}