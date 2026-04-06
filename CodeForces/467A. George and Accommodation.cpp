#include<iostream>
using namespace std;
int main(){
    int n , rooms = 0 , q , p ;
    cin >> n ;
    for ( int i = 0 ; i < n ; i++){
        cin >> p >> q ;
        if(q-p>=2) rooms++;
    }
    cout << rooms ;
    return 0;
}