#include<bits/stdc++.h>
using namespace std;
int main(){
    int testCase;
    cin>>testCase;
    while(testCase--){
        long long int n;
        cin>>n;
        int sum=0;
                for(int j=pow(2,(int)log2(n));j>=1;j/=2){
                    sum+=j;
                }
        
        cout<<((n*(n+1)/2)-(2*sum))<<"\n";
    }
    return 0;
}