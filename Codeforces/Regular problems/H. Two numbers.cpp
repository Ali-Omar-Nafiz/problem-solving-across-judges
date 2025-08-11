#include<bits/stdc++.h>
using namespace std;
int main(){
    int A, B; cin >> A >> B;
    int floorResult = A / B;
    int ceilResult = (A + B - 1) / B;
    int roundResult = round((double)A / B);
    cout << "floor " << A << " / " << B << " = " << floorResult << '\n';
    cout << "ceil " << A << " / " << B << " = " << ceilResult << '\n';
    cout << "round " << A << " / " << B << " = " << roundResult << '\n';
    return 0;
}
