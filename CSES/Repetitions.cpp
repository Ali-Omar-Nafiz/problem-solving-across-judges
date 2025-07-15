#include<bits/stdc++.h>
using namespace std;
int main(){
    string dna;
    cin>>dna;
    int max=1,count=1;
    for(int i=0;i<(dna.length()-1);i++){
        if(dna[i]==dna[i+1]){
            count++;
            if(max<count)max=count;
        }
        else count=1;
    }
    cout<<max;
    return 0;
}