#include <iostream>
#include <map>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    map<int,int> gift;
    for(int i=1; i<=n; i++){
        int pi;
        cin >> pi;
        gift[pi] = i;
    }
    for (int i=1; i<=n;i++){
        cout << gift[i] << ' ';
    }
}