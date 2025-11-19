#include <iostream>
using namespace std;
void update(int *a,int *b);
int main() {
    int a,b;
    cin>>a>>b;
    update(&a,&b);
    cout<<a<<"\n"<<b;
    return 0;
}
void update(int *a,int *b){
    int temp=*a;
    *a=*a+*b;
    (temp<*b)?(*b=(*b-temp)):(*b=(temp-*b));
}
