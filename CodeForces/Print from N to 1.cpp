#include <bits/stdc++.h>
using namespace std;
void print_n_to_1(int n);
int main() {
   int n;
   cin>>n;
   print_n_to_1(n);

    return 0;
}
void print_n_to_1(int n){
    if(n==0)return;
    if(n==1)cout<<n;
    else cout<<n<<" ";
    print_n_to_1(n-1);
}
