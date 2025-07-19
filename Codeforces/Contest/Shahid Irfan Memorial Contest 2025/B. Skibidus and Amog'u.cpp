#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        string w;
        cin >> w;
        if (w.size() >= 2) {
            w[w.size() - 2] = 'i';
            w.pop_back();
        }
        cout << w << "\n";
    }
    return 0;
}

