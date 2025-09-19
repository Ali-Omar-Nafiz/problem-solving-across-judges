#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    vector<int>divisors;
    for(int i=1;i*i<=c;i++){
        if(c%i==0){
            if(c/i==i)divisors.push_back(i);
            else{
                divisors.push_back(i);
                divisors.push_back(c/i);
            }
        }
    }
    sort(divisors.begin(),divisors.end());
    int count=0;
    for(auto d:divisors){
        if (d >= a && d <= b) count++;
    }
    cout<<count<<"\n";
    return 0;
}