#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);
    int n;
    cin>>n;
    vector<int>v1(n);
    for(int i=0;i<n;i++){
        cin>>v1[i];
    }
    int countIn,mainCount=0;
    for(int i=0;i<n;i++){
        if(v1[i]!=(-1)){
            countIn=1;
            for(int j=i+1;j<n;j++){
                if(v1[j]==v1[i]){
                    countIn++;
                    v1[j]=(-1);
                }
            }
            if(countIn>v1[i])mainCount+=(countIn-v1[i]);
            else if(countIn<v1[i])mainCount+=countIn;
        }
    }
    cout<<mainCount;
    return 0;
}

//https://vjudge.net/problem/AtCoder-arc087_a

//Got TLE
