#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,m,p,q,a;
    scanf("%lld%lld%lld",&n,&m,&a);
    if(n<1 || m<1 || a>pow(10,9)) return 0;
    p=ceil((double)n/a);
    q=ceil((double)m/a);
    printf("%lld",p*q);


    return 0;

}
