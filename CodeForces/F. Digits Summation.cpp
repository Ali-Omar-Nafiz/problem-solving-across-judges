#include<bits/stdc++.h>
using namespace std;
int main(){
    long long N, M; cin >> N >> M;
    int lastDigitOfN = N % 10;
    int lastDigitOfM = M % 10;
    int summation = lastDigitOfN + lastDigitOfM;
    cout << summation;
    return 0;
}
