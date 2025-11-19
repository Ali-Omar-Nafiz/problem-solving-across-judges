#include <bits/stdc++.h>
using namespace std;
void iLoveRecursion(int n);
int main() {
   int n;
   cin>>n;
   iLoveRecursion(n);

    return 0;
}
void iLoveRecursion(int n){
    if(n==0)return;
    cout<<"I love Recursion\n";
    iLoveRecursion(n-1);
}
