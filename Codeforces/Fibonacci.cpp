#include <bits/stdc++.h>
using namespace std;
int fibonacci(int n);
int main() {
   int n;
   cin>>n;
   cout<<fibonacci(n);

    return 0;
}
int fibonacci(int n){
    if(n==1)return 0;
    else if(n==2)return 1;
    return fibonacci(n-1)+fibonacci(n-2);
}
