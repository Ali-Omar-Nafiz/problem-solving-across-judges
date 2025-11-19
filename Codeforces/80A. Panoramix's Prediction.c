#include<stdio.h>
#include<math.h>
int isprime(int a);
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    if(n<2 || m<n || m>50)return 0;
    for(int i=n+1;; i++)
    {
        if(isprime(i))
        {
            if(i==m)printf("YES");
            else printf("NO");
            return 0;
        }
    }
    return 0;
}
int isprime(int a)
{
    int count=0;
    for(int i=2; i<=sqrt(a); i++)
    {
        if(a%i==0)count++;
    }
    if(count==0)return 1;
    else return 0;
}
