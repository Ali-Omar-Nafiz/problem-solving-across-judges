#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    if(m<1||n>16||n<m) return 0;
    if((m*n) %2 ==0)printf("%d",(m*n)/2);
    else printf("%d",((m*n)-1)/2);

    return 0;
}
