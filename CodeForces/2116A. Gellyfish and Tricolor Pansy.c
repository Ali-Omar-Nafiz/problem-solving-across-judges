#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n)
    {
        int a,b,c,d;
        scanf("%d%d%d%d",&a,&b,&c,&d);
        printf(((a<c)?a:c)>=((b<d)?b:d)?"Gellyfish\n":"Flower\n");
        n--;
    }
    return 0;
}
