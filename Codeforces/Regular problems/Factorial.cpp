#include <bits/stdc++.h>
using namespace std;
long long int factorial(long long int n);
int main() {
   int n;
   cin>>n;
   cout<<factorial(n);
 
    return 0;
}
long long int factorial(long long int n){
    if(n==0||n==1)return 1;
    return n*factorial(n-1);
}
