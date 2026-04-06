#include<stdio.h>
#include<math.h>
int main()
{
    int k,n,w,c=0;
    scanf("%d%d%d",&k,&n,&w);
    if(k<1 || w>1000 || n<0 || n>pow(10,9))  return 1;

    for(int i=1; i<=w; i++)
    {
        c+=(i*k);
    }
    if(n>c)printf("0");
    else printf("%d",c-n);

    return 0;
}
